
class Node{
	public:
		Node();
		int value();
		friend class Iterator;
		friend class Link;
	private:
		int val;
		Node *next;
};
Node::Node(){
	next=NULL;
}
int Node::value(){
	return val;
}
