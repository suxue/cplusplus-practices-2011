# include <iostream>
# include "Iterator.h"

# include "Node.h"

using namespace std;

bool Iterator::hasNext(){
    if(node->next!=NULL){
        return true;
    }else{
        return false;
    }

}
Node& Iterator::getNode(){
    return *node;
}

void Iterator::next(){
    node = node->next;
}

Iterator::Iterator(){
    node = new Node();
}
