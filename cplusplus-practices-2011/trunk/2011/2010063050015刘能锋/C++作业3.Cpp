#include<iostream>
using namespace std;
int main()
{  for(;;)
   {int weight,distance;
   cout<<"请输入邮寄包裹的重量及邮件距离:"<<endl;
   cin>>weight>>distance;
   if(weight<0||distance<0) 
   {cout<<"您输入的数据有误，请重新输入:"<<endl;
    cin>>weight>>distance;}
	if(weight<=15) cout<<"5元"<<endl;
	else if(weight<=30) cout<<"9元"<<endl;
	else if(weight<=45) cout<<"12元"<<endl;
	else if(weight<=60) cout<<14+(distance-1000)/1000<<"元"<<endl;
     	else cout<<int(15+(distance-1000)/1000)<<"元"<<endl;
   }
}
