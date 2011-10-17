#include<iostream>
using namespace std;

struct tel{
       char name[20];
       char num[20];
       }telbook[]={
                  {"Ameilia","123456789"},
                  {"Jilly","945876321"},
                  {"Kate","23767418"},
                  {"Mika","7623547"},
                  {"Gery","237859326"},
                  {"White","6564781"},
                  {"Dissy","371629630"},
                  {"Gina","12348765"}
                  };
bool strnum(char *name,char *num){
                int n1,n2;
                int ptr1,ptr2;
                n1=strlen(name);
                n2=strlen(num);
                if(n1<n2)
                          return false;
                ptr1=0;
                while(ptr1<n1){
                               ptr2=0;
                               while(name[ptr1]==num[ptr2]&&ptr1<n1&&ptr2<n2){
                                                                             ptr1++;
                                                                             ptr2++;
                                                                             }
                               if(ptr1==n1&&ptr2<n2)
                                 return false;
                               if(ptr2==n2)
                                 return true;
                                 else ptr1=ptr1-ptr2+1;
                                 }
                                 return false;
                                 }                                                      
                                  
int main(){
    int n;
    int phones;
    char string[20];
    phones=sizeof(telbook)/sizeof(tel);
    cout<<"输入电话号码或输入名字：";
    cin>>string;
    for(int i=0;i<phones;i++){
            if(strnum(telbook[i].num,string))
            cout<<i<<"\t"<<telbook[i].num<<"\t"<<telbook[i].name;
            }for(int i=0;i<phones;i++){
            if(strnum(telbook[i].name,string))
            cout<<i<<"\t"<<telbook[i].num<<"\t"<<telbook[i].name;
            cin>>n;
            return 0;
            }
            }
