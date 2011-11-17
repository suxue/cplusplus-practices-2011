# include <iostream>
# include "Link.h"
# include "Node.h"
# include "Iterator.h"


Link& Link::append(int app){
    sp = head;
    while(sp->next != NULL){
        sp = sp->next;
    }
    sp->next = new Node(app);
    return *(this);
}
Link::Link(){
    head = new Node;
    iterator.node = head;
}
Link::~Link(){
    //head->~Node();
    //iterator.node->~Node();
}
