#include<iostream>
using namespace std;
int main(){
	int i,k=0;
	for(i=100;i<200;i++){
		if(i%3!=0&&i%7!=0){
		cout<<i<<"\t";
		k++;
		if(k%5==0)
		cout<<endl;
		}
	}
}