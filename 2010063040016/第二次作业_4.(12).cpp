#include<iostream.h>
#include<string.h>
using namespace std;
class book
{
	private:
	char number[16],name[10];
	char *p;
	public:
	void setname()
	{
		p=name;
		cout<<"请输入名字"<<endl;
 	    cin>>p;
	}
	void setnumber()
	{
		p=number;
		cout<<"请输入号码"<<endl;
			cin>>p;
	}
	char* getname()
	{
		return name;
	}
	char* getnumber()
	{
		return number;
	}
};
int main()
{
	book rec[3];
	int i,j,l;
	for(i=0;i<3;i++)
	{
		rec[i].setname();
		rec[i].setnumber();
	}//录入一些数据用来查找
	cout<<"请输入关键字"<<endl;
	char key[16];
	char *pk=key;
	cin>>pk;
	l=strlen(pk);
	for(i=0;i<3;i++)
	{
	  char *zname,*znumber;
	  zname=rec[i].getname();
	  znumber=rec[i].getnumber();
	  for(j=0;j<=l;j++)
	  {  
  	     if((key[j]!=zname[j])&&(key[j]!=znumber[j])&&(j<l))
  	     {
     	  	break;
     	  }
  	     else if(j==l)
  	     cout<<zname<<":"<<znumber<<endl;
  	  }	
	}
	return 0;
}