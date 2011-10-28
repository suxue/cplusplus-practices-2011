#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

bool isDigit( string& str ){
    bool is_digit = true;
    for( unsigned short i = 0 ; i < str.length() ; i++ ){
        if( !isdigit( str[i] ) ){
            is_digit = false;
            break;
        }
    }
    return is_digit;
}

template < class T >
void getData( T& data , const string& msg ){
    bool isPass;
    string str;
    cout << msg;
    do{
        getline( cin , str );
        if( isDigit( str ) ){
            stringstream( str ) >> data;
            if( data <= 0 ){
                cout << "亲，要输入正数的哦：";
                isPass = false;
            }
            else{
                isPass = true;
            }
        }
        else{
            cout << "亲，要输入正数的哦：";
            isPass = false;
        }
    }while( !isPass );
}

int main(){
    int weight;
    string wgtMsg = "亲，请输入包裹重量（克）：";
    long distance;
    string dstMsg = "亲，请输入邮寄距离（公里）：";
    unsigned short fee;

    getData( weight , wgtMsg );
    if( weight <= 15 ){
        fee = 5;
    }
    else if( weight <= 30 ){
        fee = 9;
    }
    else if( weight <= 45 ){
        fee = 12;
    }
    else if( weight <= 60 ){
        getData( distance , dstMsg );
        fee = 14 + ( distance/1000 );
    }
    else{
        getData( distance , dstMsg );
        fee = 15 + ( distance/1000 );
    }
    cout << "亲，邮资是 " << fee << " 元哦";

    return 0;
}
