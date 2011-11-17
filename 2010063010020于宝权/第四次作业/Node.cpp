#include <iostream>
#include "Node.h"
using namespace std;

Node::Node(int n ) {
    value = n;
    next =NULL;
}
Node::Node() {
    value = 0;
    next = NULL;
}
Node::~Node() {
    /*while(this->next->next != NULL){
        delete this->next;
        this->next= this->next->next;
    }
    delete this->next;*/
}

int Node::value1() {
    return value;
}
