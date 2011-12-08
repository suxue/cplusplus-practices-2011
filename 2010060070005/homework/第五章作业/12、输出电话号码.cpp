#include<iostream>
using namespace std;
struct Phone
{
       char number[50];
       char name[50];
}PhoneBook[]={{"010123456789","Lily"},
             {"010123456879","Lucy"},
             {"028123456789","Tom"},
             {"02887878839","Niki"},
             {"13880982890","Fred"},
             {"13457896329","Gary"},
             {"879367824","Elizabeth"}
};
bool SubStrNum(char *str,char *substr){
     int h1,h2;      //分别存储str,substr的长度
     int p1,p2;      //分别指向str,substr
     h1=strlen(str);
     h2=strlen(substr);
     if(h2>h1)
        return false ;
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
     }
int main(){
    int phones;
    char string[50];
    phones=sizeof(PhoneBook)/sizeof(Phone);
    cout<<"Input phone number or name:";
    cin>>string;
    for(int i=0;i<phones;i++){
        if(SubStrNum(PhoneBook[i].number,string))
           cout<<i<<"\t"<<PhoneBook[i].number<<"\t"<<PhoneBook[i].name<<endl;
    }
    for(int i=0;i<phones;i++){
         if(SubStrNum(PhoneBook[i].name,string))
           cout<<i<<"\t"<<PhoneBook[i].number<<"\t"<<PhoneBook[i].name<<endl;
    }
    return 0;
    system("pause");
} 

          








 
