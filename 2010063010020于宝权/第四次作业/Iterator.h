#ifndef ITERATOR_H_INCLUDED
#define ITERATOR_H_INCLUDED
#include "Node.h"
class Iterator{
    public :
        bool hasNext();
        void next();
        Node& getNode();
        Iterator();
        Node * node;
};


#endif // ITERATOR_H_INCLUDED
