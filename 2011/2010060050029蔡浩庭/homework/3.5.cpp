#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
int i=0,j=26;
for(;i<26&&j>0;i++;j++){
cout<<"\c"<<i+65;
cout<<"\c"<<j+65;
}
}