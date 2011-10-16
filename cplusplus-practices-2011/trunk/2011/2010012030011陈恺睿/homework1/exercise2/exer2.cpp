#include <iostream>
using namespace std;

int main(){
    cout << "分别正向、逆向输出26个大写英文之母：" << endl;
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

