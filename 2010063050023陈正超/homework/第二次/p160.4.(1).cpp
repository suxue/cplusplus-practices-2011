//============================================================================
// Name        : p160.4.(1).cpp
// Author      : st.king
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
bool compare(int a,int b){//判断a是否大于b
	if((a&1)==(b&1))return a<b;//a和b奇偶性相同
	return a&1;
}
int main() {
	int readin[10],i,j;
	for(i=0;i<10;i++){
		cin>>readin[i];
	}for(i=0;i<10;i++){
		for(j=0;j<10-i-1;j++){
			if(compare(readin[j+1],readin[j])){
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
