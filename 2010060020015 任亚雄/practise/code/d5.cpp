#include<iostream>
using namespace std;
void print(int a[],int n);
int insert(int i,int a[],int n); 
int main()
{
    int const n=5;
    int num;
    int a[5]={-2,0,4,10,24};
    cout<<"����һ��Ҫ���������";
    cin>>num;
    cout<<endl;
    cout<<"����ǰ�������ǣ�"<<endl;
    print(a,n);
    cout<<endl;
    cout<<"�����������ǣ�"<<insert(num,a,n)<<endl;
    cout<<"�����������ǣ�"<<endl;
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
    int max=a[n-1];//����Ŀǰ������
     for(int j=0;j<=n;j++)
     {    if(i<a[j])
          break;//�ҵ������ 
           if(j==n) return i;//û���ҵ������ 
        }
      for(int m=n-1;m>j;m--)
      a[m]=a[m-1];
      a[j]=i;
      return max;
}
 
