#include<iostream>
using namespace std;
  void swap(int *num1,int *num2)
  {
     int *temp;
	 temp=num1;
	 num1=num2;
	 num2=temp;
  }

  void swap(void *num1,void *num2,int size)
  {
    char *first=(char *)num1,char *second=(char *)num2;
	for(int k=0;k<size;k++)
	{
	   char temp;
	   temp=first[k];
	   first[k]=second[k];
	   second[k]=temp;
	}
  }
int main()
{
  int x=1,y=2;
  float m=1.9f,n=4.5f;
  char name1[10]="ren",name2[10]="ya";
  swap(&x,&y);
  cout<<x<<'\t'<<y<<endl;
  swap(&m,&n,sizeof(float));
  cout<<m<<'\t'<<n<<endl;
  swap(name1,name2,sizeof(10));
  cout<<name1<<'\t'<<name2<<endl;
  system("pause");
  return 0;
}
