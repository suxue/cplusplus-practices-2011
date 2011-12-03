// Note:Your choice is C++ IDE
#include <iostream>
#define N 10
using namespace std;
int main()
{
	char a[N];
	int i,j=0,k=N-1;
	for(i=0;i<N;i++){
		cin>>a[i];
		}
    while(j<N){
    	if(a[k]==a[j]){
    		j++;
    		k--;
    		
    		}
    	else {
    	  cout<<"不是回文\n";
    	  break;}
    	}
    if(N==j)
      cout<<"是回文\n";
    return 0;
}