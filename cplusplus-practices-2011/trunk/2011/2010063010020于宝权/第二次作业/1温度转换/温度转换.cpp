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
                                 cout<<"请选择转换方向:\n"<<"1--摄氏>华氏\n"<<"2--华氏--摄氏\n" <<"3--退出"<<endl;
                                 cin>> choice;
        switch(choice){
               case 1:
                    cout<<"请输入摄氏温度:";
                    cin>>input;
                    output = input*9/5.0+32;
                    cout<<"华氏温度为 "<<output<<endl; 
                    break;
               case 2:
                    cout<<"请输入华氏温度:";
                    cin>>input;
                    output = (input-32)*5/9.0;
                    cout<<"华氏温度为 "<<output<<endl; 
                    break;  
               case 3:return ;                  
                    }
               }
        }
