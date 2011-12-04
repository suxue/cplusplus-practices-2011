#include <iostream>
using namespace std;
bool bijiao(int a,int b){
	if((a&1)==(b&1))return a<b;
	return a&1;
}
main()
 {
	int readin[10],i,j;
	for(i=0;i<10;i++){
		cin>>readin[i];
	}
	for(i=0;i<10;i++){
		for(j=0;j<10-i-1;j++){
			if(bijiao(readin[j+1],readin[j])){
				int temp=readin[j];
				readin[j]=readin[j+1];
				readin[j+1]=temp;
			}
		}
	}for(i=0;i<10;i++){
		cout<<readin[i]<<' ';
	}
	return 0;
}
