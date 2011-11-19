# include <iostream>
# include "Link.h"
# include "Node.h"
# include "Iterator.h"


Link& Link::append(int app) {
    last->next = new Node(app);
    last = last->next;
    return *(this);
}
Link::Link() {

    head = new Node;
    iterator.node = head;
    last = head;

}
Link::~Link() {
    Node *first,*next;
    first = head;

    next = first->next;
    do {
        delete first;
        first = next;
        if(first!=NULL)next = first->next;
    } while(first!=NULL);
}
Iterator* Link::_iterator(){
    return new Iterator(head);
}
