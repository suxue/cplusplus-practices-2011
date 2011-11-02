#include <iostream>
#include <new>
using namespace std;

class stack{
    public:
        stack();
        ~stack();
        void push( int );
        bool pop( int * );
    private:
        struct node{
            int val[10];
            node * prev;
            node * next;
        };
        node * head;
        node * p;
        node * lastNode;//指向链表中的最后一个节点
        unsigned short curLen;//最后一个节点的val数组的当前长度
        unsigned short maxLen;
};

stack::stack(){
    //疑问：1)怎样才能用stack的private menber maxLen来设置val的长度？
    //2)maxLen能否为常变量const？
    p = new node;
    head = lastNode = p;
    head->prev = NULL;
    head->next = NULL;
    curLen = maxLen = sizeof( p->val ) / sizeof( p->val[0] );
};

stack::~stack(){
    p = lastNode;
    while( p->prev != NULL ){
        p = lastNode->prev;
        delete lastNode;
        lastNode = p;
    }
    delete head;
    delete &curLen;
    delete &maxLen;
}

void stack::push( int n ){
    if( curLen != maxLen ){
        lastNode->val[curLen++] = n;
    }
    else{
        p = new (nothrow) node;
        if( p != 0 ){
            p->val[0] = n;
            curLen = 1;
            p->prev = lastNode;
            p->next = NULL;
            lastNode->next = p;
            lastNode = p;
        }
        else{
            cout << "Assigning memory error";
        }
    }
}

bool stack::pop( int * value ){
    if( lastNode != head ){
        *value = lastNode->val[--curLen];
        if( curLen == 0 ){
            curLen = maxLen;
            p = lastNode->prev;
            p->next = NULL;
            delete lastNode;
            lastNode = p;
        }
    }
    else{
        return false;
    }
    return true;
}

int main(){
    stack s;
    int a;
    int i;

    for( i = 0; i < 15; i++ ){
        s.push( i );
    }
    for( i = 0; i < 15; i++ ){
        s.pop( &a );
        cout << a <<endl;
    }
    return 0;
}
