#include<iostream>
using namespace std;
void input(int a[],int b[],int s[],int n)
{
    int k=1,j=1;
    for(int i=1;i<=n;i++)
    {
    cin>>s[i];
    if(s[i]%2==0){
    a[k]=s[i];
    k++;}
    else{
    b[j]=s[i];
    j++;}
    }

}
void change(int a[],int n)
{
    for(int i;i<=n;i++)
    for(int j;j<=i+1;j++)
    if(a[i]>a[j]){
        int t;
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }

}
int main()
{
    int s[10],a[5],b[5];
    input(a,b,s,10);
    change(a);
    change(b);
    for(int i=1;i<=5;i++)
    cout<<b[i]<<endl;
    for(int i=1;i<=5;i++)
    cout<<a[i]<<endl;
}

