   #include <iostream>
   using namespace std;
   int main(){
              void zhuanhuan();
              zhuanhuan();
        return 0;
   }
   void zhuanhuan(){
                int choice = 0;
        double input,output;

        while(choice!=3){
                                 cout<<"��ѡ��ת������:\n"<<"1--����>����\n"<<"2--����--����\n" <<"3--�˳�"<<endl;
                                 cin>> choice;
        switch(choice){
               case 1:
                    cout<<"�����������¶�:";
                    cin>>input;
                    output = input*9/5.0+32;
                    cout<<"�����¶�Ϊ "<<output<<endl; 
                    break;
               case 2:
                    cout<<"�����뻪���¶�:";
                    cin>>input;
                    output = (input-32)*5/9.0;
                    cout<<"�����¶�Ϊ "<<output<<endl; 
                    break;  
               case 3:return ;                  
                    }
               }
        }
