#ifndef LINK_H_INCLUDED
#define LINK_H_INCLUDED
#include "Iterator.h"
class Link {
public :
    Link();
    ~Link();
    Link& append(int app);
    Iterator* _iterator();

private:
    Iterator iterator;
    Node *head, *last;
};


#endif // LINK_H_INCLUDED
