//============================================================================
// Name        : chazhao.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	struct  menber{
		char *p;
		char  *num;
	}a[3];
   char s1[]="zhang";char s2[]="12345";
    char ss1[]="Со";char ss2[]="124567";
    char sss1[]="Соa";char sss2[]="234567";
    a[0].p=s1;a[0].num=s2;
    a[1].p=ss1;a[1].num=ss2;
    a[2].p=sss1;a[2].num=sss2;
	cout<<"please input what you want to find:";
	char b[10];
	int i;

	for(i=0;i<10;i++){
		b[i]='\0';
	}
	cin>>b;
	cout<<b<<endl;
     if(b[0]>='a'){
		for(int j=0;j<3;j++){
			i=0;
		while(b[i]!='\0'&&a[j].p[i]==b[i]){
			i++;

		}
		if(b[i]=='\0')
				cout<<"name:"<<a[j].p<<"    number:"<<a[j].num<<endl;
	}
	}
	else{

		for(int j=0;j<3;j++){
				for( i=0;i<5;i++)
				{
					if(b[i]=='\0'||a[j].num[i]!=b[i])
					{
							break;
					}

				}if(b[i]=='\0')
						cout<<"name:"<<a[j].p<<"    number:"<<a[j].num<<endl;
			}
	}
	return 0;
}
