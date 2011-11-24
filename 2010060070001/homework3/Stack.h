class Stack
{
public:
	Stack(int size);
	void Push(int item);
	int Pop();
	bool IsEmpty();
private:
	int *data;
	int count;
};
