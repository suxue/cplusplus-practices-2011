#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int i,an[10];
    
    for (i=0;i<10;i++){
        std::cin>>an[i];
        }
        //order des
        sort (an,an+10);
        for (i=0;i<10;i++){
            if(an[i]%2){
             std::cout<<an[i]<<" ";
                        }
            }
           for(i = 0;i < 10;i ++){  
        if(!(an[i] % 2)){  
            std::cout<<an[i]<<" ";  
        }  
    }  
    std::cout<<std::endl;  
    return 0;  
    }
