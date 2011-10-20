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
                cout << "�ף�Ҫ����������Ŷ��";
                isPass = false;
            }
            else{
                isPass = true;
            }
        }
        else{
            cout << "�ף�Ҫ����������Ŷ��";
            isPass = false;
        }
    }while( !isPass );
}

int main(){
    int weight;
    string wgtMsg = "�ף�����������������ˣ���";
    long distance;
    string dstMsg = "�ף��������ʼľ��루�����";
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
    cout << "�ף������� " << fee << " ԪŶ";

    return 0;
}
