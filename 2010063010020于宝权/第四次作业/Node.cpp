#include <iostream>
#include "Node.h"
using namespace std;

Node::Node(int n ){
    value = n;
    next =NULL;
}
Node::Node(){
    value = 0;
    next = NULL;
}
Node::~Node(){
    delete this;
}

int Node::value1(){
    return value;
}
