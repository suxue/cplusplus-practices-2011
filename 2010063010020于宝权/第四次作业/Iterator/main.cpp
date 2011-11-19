#include <iostream>
#include "Link.h"

using namespace std;

int main()
{
    Link link;
    link.append(1).append(2).append(3);
    Iterator* i1 = link._iterator();

    while(i1->hasNext()){
        i1->next();
        cout<<i1->getNode().getValue()<<endl;
    }
    Iterator* i2 = link._iterator();

    while(i2->hasNext()){
        i2->next();
        cout<<i2->getNode().getValue()<<endl;
    }
//    system("pause");
    return 0;
}
