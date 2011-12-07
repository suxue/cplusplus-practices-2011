/*
 * Author: Huangxiaolei
 * Date:   2010/10/27
 * Function: 实现集合类Set的操作：<= ,|，& ，+= ，-= 
 */
#include<iostream>
using namespace std;

//假设定义"<=" 表示子集的含义

class Set {
private:
	int maxSize,curSize;
	int *elems;
public:
	void copy(Set &s) {
		maxSize=s.maxSize;
		curSize=0;
		if(elems!=NULL) delete [] elems;
		elems=new int[maxSize];
		int t;
		for(int i=0;i<s.curSize;i++) {
			s.get(i,t);
			add(t);
		}
	}
	Set(Set &s) {
		copy(s);
	}
	Set(int mS):maxSize(mS) { 
		curSize=0;
		elems=new int[maxSize];
	}
	~Set() { clear(); }
	int find(int t) {
		for(int i=0;i<curSize;i++) {
			if(elems[i]==t) {
				return i;
			}
		}
		return -1;
	}
	void clear() { if(elems!=NULL) delete [] elems; elems=NULL; curSize=0; }
	Set& add(int e) {
		if(elems==NULL) elems=new int[maxSize];
		if(curSize<maxSize&&find(e)<0) {
			elems[curSize]=e; curSize++; 
		}
		return *this;
	}
	Set& del(int t) {
		int pos=find(t),i;
		if(pos<0) return *this;
		for(i=pos;i+1<curSize;i++) {
			elems[i]=elems[i+1];
		}
		curSize--;
		return *this;
	}
	void output(ostream &out) {
		for(int i=0;i<curSize;i++) {
			out << elems[i] << ' ';
		}
	}
	friend ostream& operator << (ostream &out,Set &s) {
		s.output(out);
		return out;
	}
	friend istream& operator >> (istream &in,Set &s) {
		cout << "maxSize :" << s.maxSize << endl;
		int i=s.maxSize;
		for(;i>0;i--) {
			in >> s.elems[s.maxSize-i];
		}
		s.curSize=s.maxSize;
	}
	bool get(int pos,int t) {
		if(pos>0&&pos<=curSize) {
			t=elems[pos-1];
			return true;	
		}
		else return false;
	}
	bool operator <= (const Set &s) {
		int t;
		bool is=true;
		for(int i=0;i<curSize;i++) {
			if(get(i,t)==true) {
				if(find(t)<0) {
					is=false; break;
				}
			}
			else {
				cerr << "ERROR in find()" << endl;
				system("pause");
				exit(-1);
			}
		}
		return is;
	}
	Set operator = (Set &s) {
		copy(s);
		return s;
	}
	friend Set operator & (Set &s1,Set &s2);
	friend Set operator | (Set &s1,Set &s2);
	friend Set operator - (Set &s1,Set &s2);
};

Set operator & (Set &s1,Set &s2) {
	Set m(s1.curSize+s2.curSize);
	int tmp,tmpp;
	for(int i=1;i<=s1.curSize;i++) {
		s1.get(i,tmp);
		for(int j=0;j<s2.curSize;j++) {
			tmpp=s2.find(tmp);
			if(tmpp>=0&&tmpp<=j) {
				m.add(tmp);
			}
		}
	}
	return m;
}

Set operator | (Set &s1,Set &s2) {
	Set m(s1.curSize+s2.curSize);
	int tmp;
	for(int i=0;i<s1.curSize;i++) {
		s1.get(i+1,tmp);
		m.add(tmp);
	}
	for(int i=0;i<s2.curSize;i++) {
		s2.get(i+1,tmp);
		m.add(tmp);
	}
}

Set operator - (Set &s1,Set &s2) {
	Set m(s1);
	int tmp,pos;
	for(int i=0;i<m.curSize;i++) {
		m.get(i+1,tmp);
		pos=s2.find(tmp);
		if(pos>=0&&pos<s2.curSize) {
			m.del(tmp);
		}
	}
	return m;
}

int main() {
	Set s1(5),s2(3);
	cin >> s1;
	cout << s1 << endl;
	cin >> s2;
	cout << s2 << endl;
	system("pause");
	return 0;
}
