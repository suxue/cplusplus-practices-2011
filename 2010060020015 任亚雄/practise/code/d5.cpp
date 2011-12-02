#include<iostream>
using namespace std;
void print(int a[],int n);
int insert(int i,int a[],int n); 
int main()
{
    int const n=5;
    int num;
    int a[5]={-2,0,4,10,24};
    cout<<"输入一个要插入的数：";
    cin>>num;
    cout<<endl;
    cout<<"输入前的数组是："<<endl;
    print(a,n);
    cout<<endl;
    cout<<"被挤出的数是："<<insert(num,a,n)<<endl;
    cout<<"插入后的数组是："<<endl;
    print(a,n);
    system("pause");
    return 0;
}
void print(int a[],int n)
{
     for(int i=0;i<n;i++)
     cout<<a[i]<<"  ";
}
int insert(int i,int a[],int n)
{   
    int max=a[n-1];//保存目前最大的数
     for(int j=0;j<=n;j++)
     {    if(i<a[j])
          break;//找到插入点 
           if(j==n) return i;//没有找到插入点 
        }
      for(int m=n-1;m>j;m--)
      a[m]=a[m-1];
      a[j]=i;
      return max;
}
 
