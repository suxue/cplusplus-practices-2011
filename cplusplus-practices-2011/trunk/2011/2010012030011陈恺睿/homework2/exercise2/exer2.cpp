#include <iostream>
#include <string>
using namespace std;

bool isPLD( const string& str ){
    unsigned short len = str.length();
    unsigned short i;
    bool flag = true;
    for( i = 0 ; i < len/2 ; i++ ){
        if( str[i] != str[len-1-i] ){
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
    string str;
    cout << "����һ���ַ���";
    cin >> str;
    if( isPLD( str ) ){
        cout << "�ǻ���" << endl;
    }
    else{
        cout << "���ǻ���" << endl;
    }
    return 0;
}
