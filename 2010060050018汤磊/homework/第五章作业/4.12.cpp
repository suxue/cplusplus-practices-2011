#include<iostream>
#define max 100
#define maxn 100000
using namespace std;

int n=0;//�Ѵ������� 

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
  cout<<"�����Զ��绰���벾"<<endl;
  cout<<"A-->��������Ƭ"<<endl;
  cout<<"B-->ͨ������Ѱ����"<<endl;
  cout<<"C-->ͨ������Ѱ����"<<endl;     
  cout<<"D-->�뿪"<<endl<<endl;
  cout<<"��������Ҫ�������"<<endl;  
}

void Card_Add(int n)
{
  cout<<"����:";
  cin>>card[n].Name;
  cout<<"�绰����:";
  cin>>card[n].Num;
}

void Find_Num()
{
  char* Tofind;
  int found=0;
  cout<<"����:";
  cin>>Tofind;
  
  int len=strlen(Tofind);
  for(int i=1;i<=n;i++)  
  { 
    int ok=1; 
    for(int j=0;j<len;j++)//ģ������
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
  
  if(!found) cout<<"�Բ���û���ҵ��ú���"<<endl<<endl<<endl; 
} 

void Find_Name()
{
  char* Tofind;
  int found=0;
  cout<<"����:" ; 
  cin>>Tofind;
  
  int len=strlen(Tofind);
  for(int i=1;i<=n;i++) //ģ������ 
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
  
  if(!found) cout<<"�Բ���û���ҵ�������"<<endl<<endl<<endl; 
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
                cout<<"������������������"<<endl<<endl<<endl; 
                help(); 
    }
    
  }
  return 0;
}
