#include <iostream>
using namespace std;

int main(){
    cout << "�ֱ������������26����дӢ��֮ĸ��" << endl;
    char c = 'A';
    while( c <= 'Z' ){
        cout << c << " , ";
        c++;
    }
    cout << endl;

    c = 'Z';
    while( c >='A' ){
        cout << c << " , ";
        c--;
    }
    return 0;
}

