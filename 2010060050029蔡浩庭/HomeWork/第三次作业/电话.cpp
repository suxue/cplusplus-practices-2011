#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

struct Book
{
	string name;
	string num;
};

int main(int argc, char *argv[])
{
	int n;
	cout<<"����绰�ŵĸ�����"<<endl;
	cin>>n;
	cout<<"�������� �绰�ţ�"<<endl;
	Book* tp= new Book[n];
	for(int i=0;i<n;i++){
		cin>>tp[i].name>>tp[i].num;
		cout<<endl;
	}
	cout<<"����Ҫ�ҵĺ��룬����"<<endl;
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		string string1;
		cin>>string1;
		bool found=false;
		int length=string1.size();
		for(int j=0;j<n;j++){
			if(tp[j].num.substr(0,length)==string1
				||tp[j].name.substr(0,length)==string1){
			cout<<tp[j].name<<" "<<tp[j].num<<endl;
			found=true;
			}
		}
		if(!found){
			cout<<"�Բ�����Ҫ�ҵ��Ҳ�������һ���Ӻ�����"<<endl;
		}
	}
	delete[] tp;
	return 0;
}
