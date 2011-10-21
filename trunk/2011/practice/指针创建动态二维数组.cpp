#include<iostream>
using namespace std;
int main(){
	int n,m;
	int **dm;
	cout<<"input matrix size m, n:";
	cin>>m>>n;
	dm= new int *[m];
		for(int i=0;i<m;i++)
			if((dm[i]= new int[n])==NULL)
			exit(0);
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++)
				cin>>*(*(dm+i)+j);
		}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<dm[i][j]<<"\t";
			cout<<endl;
	}
	for(int i=0;i<m;i++)
			delete[]dm[i];
		delete[]dm;
		return 0;
}