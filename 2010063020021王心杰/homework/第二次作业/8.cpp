#include<iostream>
using namespace std;
main(){	
    char s1[100];
    cout<<"请输入要判断的字符串：";
    cin>>s1;         //键盘输入一串字符存入字符串数组s1 
    void HW(char s[]);
    HW(s1);
}

void HW(char s1[]){   //判断回文的数函数体 
	int a,i,b;
	a=strlen(s1);
	char s2[100];
	for(i=0;i<a;i++){
		s2[i]=s1[a-1-i];
	}
	s2[a]='\0';
    if(strcmp(s1,s2)==0)
    cout<<"这串字符是回文"<<"\n";
	else cout<<"这串字符不是回文"<<"\n";
}
