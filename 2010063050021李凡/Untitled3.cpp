#include <iostream>
using namespace std;
int main()
{
    int i,length,result;
    cin>>i;
    cin>>length;
    if(i<=15) cout<<"����Ϊ(��λ:Ԫ):\t"<<5<<endl;
    else if(i<=30) cout<<"����Ϊ(��λ:Ԫ):\t"<<9<<endl;   
    else if(i<=45) cout<<"����Ϊ(��λ:Ԫ):\t"<<12<<endl;
    else if(i<=60) cout<<"����Ϊ(��λ:Ԫ):\t"<<14+length/1000<<endl;
    else cout<<"����Ϊ(��λ:Ԫ):\t"<<15+length/1000<<endl;
    cin>>i;
}
