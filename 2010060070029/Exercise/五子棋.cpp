#include <iostream>
using namespace std;
void init(char flag[20][20]);//��ʼ������ 
void draw(char flag[20][20]);//����ָ������ 
int test(char flag[20][20],char);//�ж��Ƿ���ֽ��� 

int main(){
    //�������̴�С ���������óɱ��� x��y 
    char flag[20][20];
    //��ʼ������ 
    init(flag);
    
    for(int x =0;x<400;    ){//�������ܹ��ܳ˷��� x*y ������ 
      int i,j;
      if(x%4==0){
        cout<<"��A���ߣ�";
        cin>>i;
        cin>>j;
        while(flag[i][j]=='X'||flag[i][j]=='O')//�ж�����λ���Ƿ������� 
        {
            cout<<endl;
            cout<<"�˵��Ѿ������ӣ��������ߣ�"; 
            cin>>i;
            cin>>j;
        }                                        
        flag[i][j]='X';//ָ��λ�÷������� 
        draw(flag);
     if(test(flag,'X'))//�ж��Ƿ��ʤ��A�� 
     {
          char replay;
          cout<<"A��ʤ�����Ƿ�����һ�֣�Y/N:";
          cin>>replay;
          if (replay=='Y'||replay=='y')
          {
            main();
          } else
          {
             break;
          }                                             
          
     }
        x+=2;
     }else{
        cout<<"��B���ߣ�";
        cin>>i;
        cin>>j;
        while(flag[i][j]=='X'||flag[i][j]=='O')
        {
            cout<<endl;
            cout<<"�˵��Ѿ������ӣ��������ߣ�"; 
            cin>>i;
            cin>>j;
        } 
        flag[i][j]='O';
        draw(flag);
     if(test(flag,'O'))//�ж��Ƿ��ʤ��B�� 
     {
          char replay;
          cout<<"B��ʤ�����Ƿ�����һ�֣�Y/N:";
          cin>>replay;
          if (replay=='Y'||replay=='y')
          {
            main();
          } else
          {
             break;
          }                                             
          
     }
        x+=2;
     }
    }
 return 0;
}

void init(char flag[][20]){
       for(int i=0;i<20;i++){ 
            for(int j=0;j<20;j++){
            flag[i][j]='|';
            cout<<"-";
            cout<<flag[i][j];
        }
        cout<<endl;
    }       
}

int test(char flag[][20],char f){
     int mark =0;
 for(int i=0;i<15;i++){
    for(int j=0;j<15;j++){
         if(//�жϺ��ţ����ţ�б�����ֳ������ 
           (f==flag[i][j]&&f==flag[i+1][j]&&f==flag[i+2][j]&&f==flag[i+3][j]&&f==flag[i+4][j])
         ||(f==flag[i][j]&&f==flag[i][j+1]&&f==flag[i][j+2]&&f==flag[i][j+3]&&f==flag[i][j+4])
         ||(f==flag[i][j]&&f==flag[i+1][j+1]&&f==flag[i+2][j+2]&&f==flag[i+3][j+3]&&f==flag[i+4][j+4]))
            {
              cout<<endl;      
              mark =1;                                                                                                                              
            }
    }
 }
 return mark;
}

void draw(char flag[][20] ){
        for(int i=0;i<20;i++){
              for(int j=0;j<20;j++){
                cout<<"-";
                cout<<flag[i][j];
            }
            cout<<endl;
         }
}

