#include <iostream>
using namespace std;
int main()
{
    int i,length,result;
    cin>>i;
    cin>>length;
    if(i<=15) cout<<"邮资为(单位:元):\t"<<5<<endl;
    else if(i<=30) cout<<"邮资为(单位:元):\t"<<9<<endl;   
    else if(i<=45) cout<<"邮资为(单位:元):\t"<<12<<endl;
    else if(i<=60) cout<<"邮资为(单位:元):\t"<<14+length/1000<<endl;
    else cout<<"邮资为(单位:元):\t"<<15+length/1000<<endl;
    cin>>i;
}
