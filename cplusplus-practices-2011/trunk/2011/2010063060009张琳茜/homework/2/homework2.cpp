#include<iostream>
using namespace std;
int main(){
	int MaxN=100;
	char c[MaxN];
	int n,j,i;
	cout<<"������һ���ַ�,����\\����"<<endl;
	for(n=0;n<MaxN;n++)
	{
    cin>>c[n];
    if(c[n]=='\\')
     {
        break;
	 }
	}
	   bool m=false;
	for(j=0;j<=n/2;j++)
	{
		if(c[0]==c[n-1])
		m=true;
	}
    if(m)
    cout<<"�ǻ���"<<endl;
    else
    cout<<"���ǻ���"<<endl;
    return 0;
               }