#ifndef ITERATOR_H_INCLUDED
#define ITERATOR_H_INCLUDED
#include "Node.h"
class Iterator {
    friend class Link;
public :
    Iterator(Node* nod);
    Iterator();
    bool hasNext();
    void next();
    Node& getNode();
private:
    Node * node;

};


#endif // ITERATOR_H_INCLUDED
