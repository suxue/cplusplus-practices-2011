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

int Node::getValue() {
    return value;
}
