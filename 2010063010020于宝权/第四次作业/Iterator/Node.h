#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

class Node {
    friend class Link;
    friend class Iterator;
public :
    int getValue();
    Node(int n);
    Node();
private:
    Node *next;
    int value;
};


#endif // NODE_H_INCLUDED
