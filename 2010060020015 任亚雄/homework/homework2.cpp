#include<iostream>
using namespace std;
int main()
{
  int array[10];
  cout<<"input ten array!"<<endl;
  for(int i=0;i<10;i++)
    cin>>array[i];
    for(int k=0;k<10;k++)
      for(int j=k;j<10;j++)
      {
        if(array[k]>array[j])
        {
          int temp;
          temp=array[k];
          array[k]=array[j];
          array[j]=temp;
                                   
        }                           
      } 
      for(int i=0;i<10;i++)
      {
      if(array[i]%2==0)
      cout<<array[i]<<"\t";
      }
      cout<<"\n";
      for(int i=0;i<10;i++)
      {
      if(array[i]%2!=0)
      cout<<array[i]<<"\t";
      }
      cout<<'\n';
      system("pause");
      return 0;     
}
