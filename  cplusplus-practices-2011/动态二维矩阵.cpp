// ��̬��ά���� 

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
    delete[] dm[i];//ɾ����������
   delete[] dm; 
  return 0;
    
    
    
    
}
