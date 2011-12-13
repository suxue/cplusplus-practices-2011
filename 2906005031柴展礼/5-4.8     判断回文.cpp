#include<iostream>
using namespace std;
bool palindrome(char *str){
	 int h=strlen(str);
	 for(int i=0;i<h/2;i++)
	 if(str[i]!=str[h-i-1])
	 return false;
	 return true;
	 }
	 int main(){
	 	 char text[180];
	 	 cin>>text;
	 	 if(palindrome(text))
	 	 cout<<text<<"is a palindrome string!"<<endl;
	 	 else
	 	 cout<<text<<"is not a palindrome string!"<<endl;
	 	 system("pause");
		 }
