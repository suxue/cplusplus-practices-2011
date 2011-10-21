#include <iostream>
using namespace std;
int main(){
	int a[10],b[5],c[5],t,i,j;
    cout<<"请输入10个整数！"<<endl;
    for(i=0;i<10;i++)
    cin>>a[i];
    int len=(sizeof(a)/sizeof(a[0]));
	for(i=0;i<len-1;i++){
		for(j=0;j<len-1;j++){
		if(a[j]>a[j+1])
			{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			}
		}
	}
	for(i=0,j=0;i<5,j<len;i++,j+=2){
		b[i]=a[j];
			cout<<b[i]<<' ';
		
	}
    for(i=0,j=1;i<5,j<len;i++,j+=2){
		c[i]=a[j];
		cout<<c[i]<<' ';
	}
}