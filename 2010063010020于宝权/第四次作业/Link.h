#ifndef LINK_H_INCLUDED
#define LINK_H_INCLUDED
#include "Iterator.h"
class Link{
    public :
        Link();
        Link& append(int app);
        Node *head, *sp, *node;
        Iterator iterator;
};


#endif // LINK_H_INCLUDED
