#include<iostream>
#include<cstring>
using namespace std;
int main(){

char* apple;
int p=0,orange;
cin>>apple;
orange=strlen(apple)-1;

while(p<orange){
if(apple[p]==apple[orange]){
p++;orange--;
}
else break;
}

if(p<orange)
cout<<"���ǻ��ģ�"<<endl;
else cout<<"�ǻ��ģ�"<<endl;
}

