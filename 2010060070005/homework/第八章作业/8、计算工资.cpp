#include<iostream>
using namespace std;
 
 class employee{
       private:
               string Name;
               string ID;
               float Money;
       public:
              employee(string name=NULL,string id=NULL,float money=0){
                            Name=name;
                            ID=id;
                            Money=money;
                            }
              void SetMoney(float m){
                             Money=m;
                             }
              float GetMoney(){
                         return Money;
                         }
              void print(){
                   cout<<Name<<"\t"<<ID<<"\t"<<Money<<endl;
                   }
       };
 class manager:public employee{
       private:
               float stableMoney;
       public:
              manager(string name=NULL,string id=NULL,float money=0):employee(name,id,money){
                           stableMoney=money;
                           }
       };
 class technician:public  employee{
       private:
               float totalMoney;
               float hour;
       public:
              technician(float hour,string name=NULL,string  id=NULL,float money=0):employee(name,id,money){
                              totalMoney=100*hour;
                              
                              }
       };
 class salesman:public employee{
       private:
               float amount;
       public:
              salesman(float amount,string name=NULL,string id=NULL,float money=0):employee(name,id,money){
                             SetMoney(money+amount*4/100);
                             }
       };
 class salesmanager:public employee{
       private:
               float amount;
               float stableMoney;
       public:
              salesmanager(float amount,string name=NULL,string id=NULL,float money=0):employee(name,id,money){
                             SetMoney(money+stableMoney+amount*4/100);
                             }
       }; 
 int main(){
     manager M("Lily","001",8000);
     M.print();
     technician T(4,"Eva","002",4000);
     T.print();
     salesman SA(5,"Coco","003",3000);
     SA.print();
     salesmanager sa(10,"Lin","004",4000);
     sa.print();
     system("pause");
 }   
