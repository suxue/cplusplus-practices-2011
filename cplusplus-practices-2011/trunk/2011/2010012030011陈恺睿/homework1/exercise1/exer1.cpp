#include <iostream>
using namespace std;

int main(){
    cout << "��100~200֮�䲻�ܱ�3����Ҳ���ܱ�7��������" << endl;
    int i;
    for( i = 100 ; i <= 200 ; i++ ){
        if( i%3 != 0 && i%7 != 0  ){
            cout << i << " , ";
        }
    }
    return 0;
}
