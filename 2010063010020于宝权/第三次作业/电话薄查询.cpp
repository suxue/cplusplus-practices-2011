#include <iostream>
#include <string>
using namespace std;

    struct cnctPerson{
          string name;
          string number;
          struct cnctPerson * next;
        } ;

    void add(cnctPerson * &current,string name,string number){
        cnctPerson * newp = new cnctPerson;
        *newp = {name,number,NULL} ;
        current->next = newp;
        current = current->next;
        //delete newp;
      }

    //test2ǰ���Ƿ����test1
   int isContain(string test1,string test2){
        for(int i = 0;i<test1.length();i++){
            if(test1[i] != test2[i]){
                return 0;
              }
          }
        return 1;
      }
    //����������
   void searchByName(cnctPerson * head,string name){
        cnctPerson * p;
        p = head;
        while(p != NULL){
            if(isContain(name,p->name)==1){
                cout<<"����:"<<p->name<<" �绰����:"<<p->number<<endl;
              }
            p = p->next;
          }
          //Ϊʲô����delete p;?��Ӱ��head?
      }
   //���������
   void searchByNumber(cnctPerson * head,string number){
        cnctPerson * p;
        p = head;
        while(p->next != NULL){
            if(isContain(number,p->number)==1){
                cout<<"����:"<<p->name<<" �绰����:"<<p->number<<endl;
              }
              p = p->next;
          }
          //ͬ������delete p;
      }

   int main(){

        cnctPerson * head;
        cnctPerson * current;
        cnctPerson one = {"Amy","2010063010001",NULL};
        head = &one;
        current = head;
        add(current,"Babala","2010063010002");
        add(current,"Corner","2010063010003");
        add(current,"Dannis","2010063010004");
        add(current,"Elly","2010063010005");
        add(current,"Frank","2010063010006");
        add(current,"Green","2010063010007");
        add(current,"Henrry","2010063010008");
        add(current,"Ilisa","2010063010009");
        add(current,"Jesseca","2010063010020");
        add(current,"Jerry","2010063010010");
        add(current,"Kathy","2010063010011");
        add(current,"Lisa","2010063010012");
        add(current,"Mike","2010063010013");
        add(current,"Nobel","2010063010014");
        add(current,"Operator","2010063010015");
        add(current,"Penny","2010063010016");
        cnctPerson * p = head;

        /*�������
        while(p!= NULL){
            cout<<p->name<<endl;
            p = p->next;
        }*/

        cout<<"�밴������ѯ:";
        string searchName;
        cin>>searchName;
        cout<<"��ѯ���:"<<endl;
        searchByName(head,searchName);
        cout<<"�밴�������:";
        string searchNumber;
        cin>>searchNumber;
        cout<<"��ѯ���:"<<endl;
        searchByNumber(head,searchNumber);
        //�е�IDE����ʶ��仰:system("pause");

   }
