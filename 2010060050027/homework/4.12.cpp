#include<iostream>
#define max 100
#define maxn 100000
using namespace std;

int n=0;//已存号码个数 

typedef struct
{
  char Name[100],Num[100];
}Card,CardPtr;

Card card[maxn];

void Card_Print(Card card)
{
  cout<<card.Name<<'\t'<<card.Num<<endl;
}

void help()
{
  cout<<"简易自动电话号码簿"<<endl;
  cout<<"A-->加入新名片"<<endl;
  cout<<"B-->通过号码寻姓名"<<endl;
  cout<<"C-->通过姓名寻号码"<<endl;     
  cout<<"D-->离开"<<endl<<endl;
  cout<<"请问您需要哪项服务？"<<endl;  
}

void Card_Add(int n)
{
  cout<<"姓名:";
  cin>>card[n].Name;
  cout<<"电话号码:";
  cin>>card[n].Num;
}

void Find_Num()
{
  char* Tofind;
  int found=0;
  cout<<"号码:";
  cin>>Tofind;
  
  int len=strlen(Tofind);
  for(int i=1;i<=n;i++)  
  { 
    int ok=1; 
    for(int j=0;j<len;j++)//模糊查找
      if(Tofind[j]!=card[i].Num[j])
      {
        ok=0;
        break;
      }
    if(ok)
    { 
      Card_Print(card[i]);
      found=1;
    }
  }
  
  if(!found) cout<<"对不起，没有找到该号码"<<endl<<endl<<endl; 
} 

void Find_Name()
{
  char* Tofind;
  int found=0;
  cout<<"姓名:" ; 
  cin>>Tofind;
  
  int len=strlen(Tofind);
  for(int i=1;i<=n;i++) //模糊查找 
  { 
    int ok=1; 
    for(int j=0;j<len;j++)
      if(Tofind[j]!=card[i].Name[j])
      {
        ok=0;
        break;
      }
    if(ok)
    { 
      Card_Print(card[i]);
      found=1;
    }
  }
  
  if(!found) cout<<"对不起，没有找到该姓名"<<endl<<endl<<endl; 
}

int main()
{
  char ans[5];
  help();
  
  
  while( scanf("%s",ans)==1 && ans[0]!='D')
  {
    switch(ans[0])
    {
      case 'A':  Card_Add(++n);  break;
      case 'B':  Find_Num();  break;  
      case 'C':  Find_Name(); break;
      default:  
                cout<<"输入有误，请重新输入"<<endl<<endl<<endl; 
                help(); 
    }
    
  }
  return 0;
}
