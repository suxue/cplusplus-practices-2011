#include<iostream>

using namespace std;
void juage(char a[],int head,int nall){                           //递归

	if(nall<=head){
		cout<<"该字符串是回文！"<<endl;

	}
	else{
		if(a[head]==a[nall]){
				juage(&a[0],head+1,nall-1);
			}
			else{
				cout<<"该字符串不是回文！ "<<endl;
			}
	}


}
int main(){

	char a[21];
	int i=0;
	cout<<"pleas input a string (waring: the string can't over 20 letters and be chinese ):"<<endl;
	cin>>a;
	while(a[i]!='\0'){
			i++;   //记录字符数目
		}
  juage(&a[0],0,i-1);
	return 0;
}
