#include<iostream>
using namespace std;
int main(){
for(int i=100;i<=200;i++){
if((i%3!=0)&&(i%7!=0)){
cout<<i<<'\t';}
else 
continue;
}
system("pause");
return 0;

}
