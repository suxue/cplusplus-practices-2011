#include <iostream>
using namespace std;
int main(){
	char ba[100];
	cin>>ba;
	int i=0,j=0;
	while(ba[i]!=0)
		i++;
	i--;
	while(j<=i){
		if(ba[j]==ba[i]){
			if(j==i||j==i-1)
				cout<<"Yes"<<endl;
			i--;
			j++;
		}
		else{
			cout<<"NO"<<endl;
			break;
		}
	}
	return 0;
}
