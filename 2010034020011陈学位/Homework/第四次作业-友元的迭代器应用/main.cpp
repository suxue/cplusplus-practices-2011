#include<iostream>
using namespace std;
#include "Link.h"
int main(){
	Link link;
	link.append(1).append(2).append(3);
	cerr<<"Build\n";
	Iterator i=link.iterator;
	while(i.HasNext()){
		i.Next();
		Node node=i.GetNode();
		cout<<node.value()<<endl;
	}
	cerr<<"quit\n";
	return 0;
}

