#include<iostream>
using namespace std;
main(){	
    char s1[100];
    cout<<"������Ҫ�жϵ��ַ�����";
    cin>>s1;         //��������һ���ַ������ַ�������s1 
    void HW(char s[]);
    HW(s1);
}

void HW(char s1[]){   //�жϻ��ĵ��������� 
	int a,i,b;
	a=strlen(s1);
	char s2[100];
	for(i=0;i<a;i++){
		s2[i]=s1[a-1-i];
	}
	s2[a]='\0';
    if(strcmp(s1,s2)==0)
    cout<<"�⴮�ַ��ǻ���"<<"\n";
	else cout<<"�⴮�ַ����ǻ���"<<"\n";
}
