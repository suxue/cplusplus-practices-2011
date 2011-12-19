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

struct Telephone_Book
{
	string nam;
	string number;
};

int main(int argc, char *argv[])
{
	int n;
	cout<<"input the number of new telephone numbers:\n";
	cin>>n;
	cout<<"input n lines,each line contains a name and a telephone like  A B  :\n";
	Telephone_Book* tp= new Telephone_Book[n];
	for(int i=0;i<n;i++){
		cin>>tp[i].nam>>tp[i].number;
		cout<<endl;
	}
	cout<<"input the number of searches\n";
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		string fstr;
		cin>>fstr;
		bool found=false;
		int length=fstr.size();
		for(int j=0;j<n;j++){
			if(tp[j].number.substr(0,length)==fstr
				||tp[j].nam.substr(0,length)==fstr){
			cout<<tp[j].nam<<" "<<tp[j].number<<endl;
			found=true;
			}
		}
		if(!found){
			cout<<"NOT found\n";
		}
	}
	delete[] tp;
	return 0;
}
