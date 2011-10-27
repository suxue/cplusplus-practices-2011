// 动态二维矩阵 

#include<iostream>
using namespace std;

int main()
{
  int m,n;
  int** dm;
  
  cout<<"input matrix size m,n"<<'\011';
  cin>>m>>n;
  
  dm=new int*[m];
  for(int i=0;i<m;i++)
    if( (dm[i]=new int[n]) == NULL) exit(0);
  
  for(int i=0;i<m;i++)
    delete[] dm[i];//删除的是数组
   delete[] dm; 
  return 0;
    
    
    
    
}
