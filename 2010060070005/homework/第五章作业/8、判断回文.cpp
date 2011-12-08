#include<iostream> 

using namespace std; 

bool huiwen(char arr[]) 
{ 
    int n=strlen(arr);
    int m=n-1; 
 for(int i=0;i<n/2;i++,m--) 
 { 
  if(arr[m]!=arr[i]) 
   return false; 
 } 
   return true; 
} 
int main() 
{ 
 char Arr[50]; 
 cin>>Arr; 
 int m; 
 m=huiwen(Arr); 
 if(m==0) {
  cout<<"it is huiwen"<<endl; 
  }
 else{ 
  cout<<"it isn't huiwen"<<endl; 
  }
  system("pause");
} 
     
    
