#include<iostream>
using namespace std;
int main(){
	int i;
	cout<<"在100~200之间既不能被3整除也不能被7整除的数为："<<endl; 
	for(i=100;i<=200;i++)
	{
	 					 if(i%3!=0&&i%7!=0)
	 					 cout<<i<<"\t";
     }
     printf("\n");
     system("pause");
}
