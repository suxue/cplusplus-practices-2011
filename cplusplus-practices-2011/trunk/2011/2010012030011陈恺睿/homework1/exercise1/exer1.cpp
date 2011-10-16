#include <iostream>
using namespace std;

int main(){
    cout << "求100~200之间不能被3整除也不能被7整除的数" << endl;
    int i;
    for( i = 100 ; i <= 200 ; i++ ){
        if( i%3 != 0 && i%7 != 0  ){
            cout << i << " , ";
        }
    }
    return 0;
}
