#include<iostream>
#include<conio.h>
#include<Cstring>
#define N 3
using namespace std;
typedef struct node
{
  char name[10];
  char number[20];                      
};
struct node text[100]={"0"};
void create_list()
{
    int i=0;
    char temp;    
    for(i;i<N;i++)
    {
        cout<<"输入你的名字是："<<endl;
        cin>>text[i].name;
        cout<<"输入你的号码是："<<endl;
        cin>>text[i].number;                 
    }
}
void print()
{
  int i=0;
  for(i;i<N;i++)                                 
  {
    cout<<"名字是："<<text[i].name<<"号码是："<<text[i].number;
  }       
}

void find(char *temp)
{
   int i=0;
  while(strcmp(text[i].name,temp)!=0)
  {
    i++;  
    if(i>N)
    break;                                                           
  }        
  if(i>N)
  {
  cout<<"no found!"<<endl; 
   }                                                      
  else cout<<text[i].name<<"is"<<text[i].number<<endl;
                                                               
}
void find_2(char *number)
{
  /*for(int i=0;i<N;i++)
  {
  if(strcmp(text[i].number,number)!=0)
     cout<<text[i].name<<"is"<<text[i].number<<endl;
  }
  cout<<"no found!"<<endl;*/
  int i=0,j=0;
  cout<<"wori ";
 for(i;i<N;i++) 
  while(text[i].number[j]==number[j])
  {
    cout<<text[i].name<<text[i].number<<'\t';
    break;                                   
  }                                              
}
int main()
{
  char *name;
  
  char *number;
   number=new char[30];
  create_list();
  //cout<<"input what do you want to find?";
  //cin>>name;
  //find(name);
  cout<<"input the former of the number"<<endl;
  cin>>number;
  //cout<<number;
  find_2(number);
  //print();
  getch();
  return 0;                                
                                 
                                  
}
