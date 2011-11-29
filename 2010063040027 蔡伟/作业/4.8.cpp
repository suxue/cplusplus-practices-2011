#include<iostream>
#include<cstring>
#include<cstdlib> 
using namespace std;
int main()
{
 	int i,k=0;
 	char a[100];
 	cin>>a;
	for(i=0;i<strlen(a)/2;i++)
	{
	 	if(a[i]==a[strlen(a)-1-i])
    	  k++;
	}

  	if(k>=strlen(a)/2)
  	 cout<<"是回文"<<endl;
    else  cout<<"不是回文"<<endl;
    system("pause");
    return 0;
}
