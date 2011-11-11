#include <iostream>
#include "Link.h"

using namespace std;

int main()
{
    Link link;
    link.append(1).append(2).append(3);
    Iterator i = link.iterator;
    while(i.hasNext()){
        i.next();
        Node node = i.getNode();
        cout<<node.value1()<<endl;
    }
}
