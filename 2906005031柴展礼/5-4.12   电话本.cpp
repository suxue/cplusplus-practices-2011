#include<iostream>
using namespace std;
struct Phone{
	   char number[20];
	   char name[16];
	   }PhoneBook[]={
        {"02809761256","包广国"},
	    {"02868321009","田紫鑫"},
	    {"02890809777","田野"},
	    {"02811728764","包子头"},
	    {"01072110000","杜子腾"},
		{"89720110000","马化腾"},
		{"02813145240","阿甘"},
		{"01109876435","阿门"}
		};
		bool SubStrNum (char *str,char *substr){
			 int h1,h2;
			 int p1,p2;
			 h1=strlen(str);
			 h2=strlen(substr);
			 if(h2>h1)
			 return false;
			 p1=0;
			 while(p1<h1)
			 {
			  			 p2=0;
						   while(str[p1]==substr[p2]&&p2<h2&&p1<h1)
						   {
				    		   	 p1++;
			        		     p2++;
						   }
						     if(p1==h1&&p2<h2)
						     return false;
						     if(p2==h2)
						     return true;
						     else
						     p1=p1-p2+1;
              }
			  return false;
}
int main(){
 	    int phones;
    	char string[20];
	    phones=sizeof(PhoneBook)/sizeof(Phone);
		cout<<"Input phone number or name:" ;
		cin>>string;
		for(int i=0;i<phones;i++){
		if(SubStrNum(PhoneBook[i].number,string))
		cout<<i<<"\t"<<PhoneBook[i].number<<"\t"<<PhoneBook[i].name<<endl;
		                      }
		for(int i=0;i<phones;i++){
		if(SubStrNum(PhoneBook[i].name,string))
		cout<<i<<"\t"<<PhoneBook[i].number<<"\t"<<PhoneBook[i].name<<endl;
		           			 }
		system("pause");
		}
