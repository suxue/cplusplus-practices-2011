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

    cout << "请输入" << LEN << "个整数：" << endl;
    for( i = 0 ; i < LEN ; i++ ){
        cout << "第" << i+1 << "个：";
        cin >> arr[i].num;
        arr[i].isOdd();
    }

    sort( arr , LEN );
    cout << "按升序排序输出（奇数在前，偶数在后）：" << endl;
    for( i = 0 ; i < LEN ; i++ ){
        cout << arr[i].num << " , ";
    }
    return 0;
}
