#include<iostream>
using namespace std;

//数据类型 
typedef struct node
{
  int data;
  struct node *next;                       
}JD;

class Set
{
  public:
        bool IsEmpt();
        int size();
        bool IsElement(int e) const;
        //bool IsSubset(const &Set) const;
        //bool IsEqual(const &Set) const;
        Set& insert(int e);
       // Set union(const Set&)const;
        Set intersection(const Set& s)const;
        Set difference(const Set& s)const;
        Set();
        ~Set();
  private:  
       JD *head;      
};

Set::Set()
{
  JD *head=new JD[sizeof(JD)];
  head->data=0;
  head->next=NULL;
}
Set::~Set()
{
  delete head;                      
}
bool Set::IsEmpt()
{
  return head->next!=NULL;                             
}

bool Set::IsElement(int e)const
{
   JD *p;
   p=new JD[sizeof(JD)];
   p=head->next;
   if(p->data!=e)
   {
     p=p->next;
     if(p==NULL)
     return false;
     }
   return (p!=NULL);                   
}

int Set::size()
{
  JD *p;
  int m=0;
  p=new JD[sizeof(JD)];
  p=head->next;
  if(p!=NULL)
  {
    p=p->next;
    m++;                                     
  }
  return m;                                 
}


/*bool Set::IsSubset(const Set& s)const 
{
  JD *p;
  p=new JD[sizeof(JD)];
  p=s;
  for(int i=0;i<size();i++)
  {
    if(IsElement(p->data))
    p=p->next;
    else return false;                         
  }
  return true;           
}

bool Set::IsEqual(const Set& s)const
{
  return (this.IsSubset(s)&&s.IsSubset(this));
}*/
Set& Set::insert(int e)
{
      JD *P;
      JD *p=new JD[sizeof(JD)];
      p->data=e;
      p->next=head->next;
      head->next=p;
      cout<<"test"<<endl;
      return *this;                 
}


int main()
{
  Set s;
  if(!s.IsEmpt())
    cout<<"s isn't empty!\n";
  else 
    cout<<"s is empty\n";
   cout<<s.size();
   /*s.insert(22);
   if(!s.IsEmpt()) 
    cout<<"s isn't empty!\n";
   else 
    cout<<"s is empty\n"; */
  system("pause");
   return 0;                               
}
