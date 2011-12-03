#include<iostream>
using namespace std;
class Set{
	private:
	int n,m,G[20];
	public:
	Set()
	{
		this->m=0;this->n=0;
	}
	void display(){
		cout<<"{";
		for(int i=0;i<n-1;i++)
			cout<<G[i]<<",";
		cout<<G[n-1]<<"}"<<endl;
	}
	bool Belong(int e){
		for(int i=0;i<n;i++)
			if(G[i]==e)
			return true;
		return false;
	}
	bool operator <=(Set &B){
		for(int i=0;i<n;i++)
		  if(!(Belong(B.G[i])))
		    return false;
	    return true;
	}
	Set operator |(Set &B){
		Set C;
		C.n=n;
		for(int i=0;i<n;i++)
		   C.G[i]=G[i];
		for(int i=0;i<B.n;i++)
		     if(!(Belong(B.G[i])))
				  C.G[C.n++]=B.G[i];
	   return C;
	}
	Set operator &(Set &B){
		Set C;
		for(int i=0;i<B.n;i++)
		   if(Belong(B.G[i]))
		     C.G[C.n++]=B.G[i];
       return C;
	}
	Set operator -(Set B){
		Set C;
		for(int i=0;i<n;i++)
		   if(!(B.Belong(G[i])))
		     C+=G[i];
       return C;
	}
	Set operator +=(int e){
		if(Belong(e))
		return *this;
		else
		{G[m]=e;m++;n++;}
		return *this;
	}
	Set operator -=(int e){
		int i;
		if(!(Belong(e)))
		  return *this;
		for(i=0;i<n;i++)
		  if(G[i]==e)
		   break;
	    for(int j=i;j<n;j++)
	      G[j]=G[j+1];
        n--;
        return *this;
	}
};
int main(){
	Set S1,S2,S3;
	S1+=1;S1+=2;S1+=3;S1+=4;S1+=5;
	cout<<"S1=";
	S1.display();
	S2+=3;S2+=4;S2+=5;S2+=6;
	cout<<"S2=";
	S2.display();
	S3+=1;S3+=2;S3+=3;
	cout<<"S3=";
	S3.display();
	S1-=5;
	cout<<"去掉5之后S1=";
	S1.display();
	if(S1<=S3)
	cout<<"S3包含于S1"<<endl;
	else
	cout<<"S3不包含于S1"<<endl;
	cout<<"S1和S2的并集是：";
	(S1|S2).display();
	cout<<"S1和S2的交集是：";
	(S1&S2).display();
	cout<<"S1和S2的差集是：";
	(S1-S2).display();
	return 0;
}