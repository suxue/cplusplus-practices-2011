/*
 * Author: Huangxiaolei
 * Date:   2010/10/24
 * Function: ���û������һ�ַ��������е��ַ� 'c' ɾ������������
 */
 #include<iostream>
 #include<stdlib.h>
 using namespace std;
 const int N=100;
 int main(){
 	 char a[N];
 	 int i,n;
 	 cout<<"The length of the string:";
 	 cin>>n;
 	 cout<<"Input a string of character:";
 	 getchar();
     for(i=0;i<n;i++){
	      a[i]=getchar();
	      if(a[i]=='c'){
			  a[i]='\0';
	      }
     }
     a[i]='\0';
     cout<<"The output is:";
     for(i=0;i<n;i++){
	      if(a[i]!='\0'){
 			 cout<<a[i];
		  }
     }
     cout<<endl;
     system("pause");
     return 0;
 }
     
	 	  
