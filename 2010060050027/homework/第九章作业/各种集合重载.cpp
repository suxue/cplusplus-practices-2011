#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Set
{
  private:
          vector<int> set; 
  public:
         Set(){};
         Set(vector<int> _set);
         Set(int a[],int n);
         
         bool isEmpty();
         int size();
         bool IsElem(int e);
         bool IsSubset(Set s);
         bool IsEqual(Set s);
         void insert(int e);
         void Print();
         Set Getunion(Set s);
         Set Intersection(Set s);
         Set Difference(Set s);
         friend bool operator <=(Set s1,Set s2);
         friend Set operator |(Set s1,Set s2);
         friend Set operator &(Set s1,Set s2);
         friend Set operator -(Set s1,Set s2);
         friend void operator +=(Set &s1,int e);
         friend void operator -=(Set &s1,int e);
};
//各种重载哈 
bool operator <=(Set s1,Set s2)
{
   return s2.IsSubset(s1);
}

Set operator |(Set s1,Set s2)
{
  return s1.Getunion(s2);
}

Set operator &(Set s1,Set s2)
{
  return s1.Intersection(s2);
}

Set operator -(Set s1,Set s2)
{
  return s1.Difference(s2);
}

void operator +=(Set &s1,int e)
{
  s1.insert(e);
}

void operator -=(Set &s1,int e)
{
  vector<int>::iterator temp;
  for(temp=s1.set.begin(); temp!=s1.set.end(); temp++)
    if(*temp==e) s1.set.erase(temp);
}

Set::Set(vector<int> _set)
{
  set=_set;
}

Set::Set(int a[],int n)
{
  sort(a,a+n);
  vector<int> temp(a,a+n);
  set=temp;
  
  cout<<"建立集合：(";
  for(int i=0;i<size();i++)
  {
    cout<<set[i];
    if(i!=size()-1) cout<<",";
  }
  cout<<")"<<endl;
}

int Set::size()
{
  return set.size();
}

bool Set::IsElem(int e)
{
  for(int i=0;i<set.size();i++)
    if(set[i]==e) return true;
   return false;     
}

bool Set::IsSubset(Set s)
{
  for(int i=0;i<s.size();i++)
    if(!IsElem(s.set[i])) return false;
  return true;
}

bool Set::IsEqual(Set s)
{
  return this->set==s.set;
}

void Set::Print()
{
  cout<<"(";
  for(int i=0;i<size();i++)
  {
    cout<<set[i];
    if(i!=size()-1) cout<<",";
  }
  cout<<")"<<endl;
}
  

void Set::insert(int elem)
{
  set.push_back(elem);
  sort(set.begin(),set.end());
}

Set Set::Getunion(Set s)
{
  vector<int> temp;
  temp=set;
  for(int i=0;i<s.size();i++)
    if(!IsElem(s.set[i])) temp.push_back(s.set[i]);
  sort(temp.begin(),temp.end());
  Set NewSet(temp);
  return NewSet;
}

Set Set::Intersection(Set s)
{
  vector<int> temp;
  for(int i=0;i<s.size();i++)
    if(IsElem(s.set[i])) temp.push_back(s.set[i]);
  Set NewSet(temp);
  return NewSet;
} 
Set Set::Difference(Set s)
{
  vector<int> temp;
  for(int i=0;i<s.size();i++)
    if(!IsElem(s.set[i])) temp.push_back(s.set[i]);
  for(int i=0;i<set.size();i++)
    if(!s.IsElem(set[i])) temp.push_back(set[i]); 
  sort(temp.begin(),temp.end());
  Set NewSet(temp);
  return NewSet;
}

int main()
{
  int a1[]={1,3,4,9};
  int a2[]={2,3,4};
  Set s1(a1,4),s2(a2,3),s3,s4,s5;
  
  s1+=12;
  cout<<"s1+=12\ns1="; 
  s1.Print();  
  
  s1-=1;
  cout<<"s1-=1\ns1="; 
  s1.Print();  
  
  cout<<"s3=s1-s2=";
  s3=s1-s2;
  s3.Print();  
  s3=s1|s2;
  cout<<"s3=s1+s2=" ;
  s3.Print();  
  while(2);
}



