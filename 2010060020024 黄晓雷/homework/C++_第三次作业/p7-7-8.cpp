/*
 *  Author: Huangxiaolei
 *  Date:   2011/10/25
 *  Function: ����һ��������Set�� 
 */

#include<iostream>
using namespace std;

template<class T>
class Set;

template<class T>
class Node {
	template<class D> friend void getUnion(const Set<D> &a,const Set<D> &b,Set<D> &c); //�󲢼�
	template<class D> friend void  getIts(const Set<D> &a,const Set<D> &b,Set<D> &c); //�󽻼�
	template<class D> friend void  getDiff(const Set<D> &a,const Set<D> &b,Set<D> &c); //��
	friend class Set<T>;
private:
	T data;
	Node<T> *next;
public:
	Node(T d) { data=d; next=NULL; }
};

template<class T>
class Set {
	template<class D> friend void getUnion(const Set<D> &a,const Set<D> &b,Set<D> &c); //�󲢼�
	template<class D> friend void  getIts(const Set<D> &a,const Set<D> &b,Set<D> &c); //�󽻼�
	template<class D> friend void  getDiff(const Set<D> &a,const Set<D> &b,Set<D> &c); //��
	template<class D> friend bool  isEqual(const Set<D> &a,const Set<D> &b); //�ж��Ƿ����
private:
	Node<T> *head;
public:
	Set() { head=NULL; }
	~Set() { clear(); }
	Set<T>& insert(T data);
	void clear();
	void output(ostream &out) const;
	int getSize() const; //���ؼ���Ԫ�ظ��� 
	void deletes(T target); //ɾ��ָ��Ԫ��
	bool isEmpty() const { return (head==NULL); } //�����п� 
	bool isElem(const T d) const; //�ж��Ƿ��Ǽ��ϵ�Ԫ��
	bool isSubset(const Set<T> &r) const; //�ж��Ƿ����Ӽ�
};

template<class D>
void getUnion(const Set<D> &a,const Set<D> &b,Set<D> &c) {
	if(c.isEmpty()==false) {
		cerr << "argument 3 should be empty set." << endl;
		system("pause");
		return;
	}
	int lena=a.getSize(),lenb=b.getSize();
	Node<D> *p1=a.head,*p2=b.head;
	for(int i=0;i<lena;i++) { c.insert(p1->data); p1=p1->next; }
	for(int j=0;j<lenb;j++) { c.insert(p2->data); p2=p2->next; }
	return;
}

template<class D>
void getIts(const Set<D> &a,const Set<D> &b,Set<D> &c) {
	if(c.isEmpty()==false) {
		cerr << "argument 3 should be empty set." << endl;
		system("pause");
		return;
	}
	int lena=a.getSize();
	Node<D> *p1=a.head;
	for(int i=0;i<lena;i++) {
		if(b.isElem(p1->data)==true) {
			c.insert(p1->data);
		}
		p1=p1->next;
	}
	return;
}

//������A-B 
template<class D>
void getDiff(const Set<D> &a,const Set<D> &b,Set<D> &c) {
	if(c.isEmpty()==false) {
		cerr << "argument 3 should be empty set." << endl;
		system("pause");
		return;
	}
	int lena=a.getSize();
	Node<D> *p1=a.head;
	for(int i=0;i<lena;i++) {
		if(b.isElem(p1->data)==false) {
			c.insert(p1->data);
		}
		p1=p1->next;
	}
	return;
}

template<class D>
bool isEqual(const Set<D> &a,const Set<D> &b) {
	if(a.isSubset(b)==true&&b.isSubset(a)==true) { return true; }
	else return false;
}

template<class T>
bool Set<T>::isSubset(const Set<T> &r) const {
	if(r.isEmpty()==true) { return true; }
	Node<T> *p=r.head;
	while(p!=NULL) {
		if(isElem(p->data)==false) { break; }
		p=p->next;
	}
	if(p==NULL) return true;
	else return false;
}
 
template<class T>
bool Set<T>::isElem(const T d) const {
	Node<T> *p=head;
	while(p!=NULL) {
		if(p->data==d) {
			return true;
		}
		p=p->next;
	}
	return false;
}

template<class T>
Set<T>& Set<T>::insert(T data) {
	if(head==NULL) { head=new Node<T>(data); return *this; }
	Node<T>  *p=head;
	while(p!=NULL) {
		if(p->data==data) {
			cerr << "Element already exist." << endl;
			return *this;
		}
		p=p->next;
	}
	Node<T> *newNode=new Node<T>(data);
	newNode->next=head;
	head=newNode;
	return *this;
}

template<class T>
void Set<T>::clear() {
	Node<T> *p=head,*q;
	if(p==NULL) { return; }
	do {
		q=p;
		p=p->next;
		delete q;
	}while(p!=NULL);
	return;
}

template<class T>
void Set<T>::output(ostream &out) const {
	Node<T> *p=head;
	if(p==NULL) { return; }
	do {
		cout << p->data << ' ';
		p=p->next;
	}while(p!=NULL);
	return;
}

template<class S>
ostream& operator << (ostream &out,const Set<S> &l) { l.output(out); return out; }

template<class T>
int Set<T>::getSize() const {
	Node<T> *p=head;
	if(p==NULL) { return 0; }
	int size=0;
	do {
		size++;
		p=p->next;
	}while(p!=NULL);
	return size;
}

template<class T>
void Set<T>::deletes(T target) {
	if(head==NULL) { return; }
	Node<T> *p,*q;
	if(head->data==target) {
		do {
			q=head->next;
			delete head;
			head=q;
			if(head==NULL) break;
		}while(head->data==target);
	}
	if(head==NULL) { return; }
	Node<T> *beforep=head;
	bool deleted=false;
	p=head->next;
	q=p->next;
	if(p==NULL) { return; }
	if(q==NULL) { if(p->data==target) { head->next=q; delete p; } return; }
	do {
		q=p->next;
		if(p->data==target) { beforep->next=q; delete p; deleted=true; }
		p=q;
		if(deleted==false) beforep=beforep->next;
		deleted=false;
	}while(p!=NULL);
	return;
}
int main() {
	Set<int> A,B,C,D,E,F;
	int temp;
	cout << "���뼯��A�ͼ���B��5��Ԫ��" << endl;
	for(int i=0;i<5;i++) {
		cin >> temp;
		A.insert(temp);
		B.insert(temp);
	}
	cout << "���뼯��C��10��Ԫ��" << endl;
	for(int i=0;i<10;i++) {
		cin >> temp;
		C.insert(temp);
	}
	cout << "�ж�Ԫ���Ƿ����ڼ���A" << endl;
	cin >> temp;
	if(A.isElem(temp)==true) {
		cout << "���ڼ���A" << endl; 
	}
	else {
		cout << "�����ڼ���A" << endl;
	}
	cout << "�жϼ���A�Ƿ�����ڼ���C" << endl; 
	if(C.isSubset(A)==true) {
		cout << "����A�����ڼ���C" << endl; 
	}
	else {
		cout << "����A�������ڼ���C" << endl; 
	}
	cout << "�ж�A��C�Ƿ����" << endl;
	if(isEqual(A,C)==true) { cout << "���" << endl; }
	else { cout << "�����" << endl; }
	cout << "�ж�A��B�Ƿ����" << endl;
	if(isEqual(A,B)==true) { cout << "���" << endl; }
	else { cout << "�����" << endl; }
	cout << "�󼯺�A��C�Ĳ�" << endl;
	getUnion(A,C,D);
	D.output(cout);
	cout << "�󼯺�A��C�Ľ�" << endl;
	getIts(A,C,E) ;
	E.output(cout);
	cout << "�󼯺�C��A�Ĳ�"  << endl;
	getDiff(C,A,F);
	F.output(cout);
	system("pause");
	return 0;
}
