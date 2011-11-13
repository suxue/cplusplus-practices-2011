
class Stack{
    private:
	int *base,*top,length;
	public:
	Stack(int m);
	//~Stack();
	void Push(int m);
	int Pop();
	int Gettop();
	bool isempty();
};
