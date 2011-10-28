#include <iostream>
using namespace std;

#define LEN 10

class node{
    public:
        int num;
        bool odd;
        void isOdd(){
            odd = ( num%2 == 0 )?false:true;
        }
};

void sort( node a[] , const unsigned short len ){
    unsigned short i, j;
    node tmp;

    for( i = 1 ; i < len ; i++ ){
        tmp = a[i];
        for( j = i ; j > 0 ; j-- ){
            if( !( a[j-1].odd && !tmp.odd ) ){
                if( a[j-1].odd == tmp.odd ){
                    if( a[j-1].num > tmp.num ){
                        a[j] = a[j-1];
                    }
                    else{
                        break;
                    }
                }
                else{
                    a[j] = a[j-1];
                }
            }
            else{
                break;
            }
        }
        a[j] = tmp;
    }
}

int main(){
    node arr[LEN];

    unsigned short i;

    cout << "������" << LEN << "��������" << endl;
    for( i = 0 ; i < LEN ; i++ ){
        cout << "��" << i+1 << "����";
        cin >> arr[i].num;
        arr[i].isOdd();
    }

    sort( arr , LEN );
    cout << "���������������������ǰ��ż���ں󣩣�" << endl;
    for( i = 0 ; i < LEN ; i++ ){
        cout << arr[i].num << " , ";
    }
    return 0;
}
