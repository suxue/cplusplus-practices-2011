#ifndef  LIKLIST_H
#define   LIKLIST_H

class Linklist {
public:
	Linklist();
	~Linklist();
	void create(int n);
	void push(int need);
	int delet(int need);
	int pop();

	void print();
private:
	struct link {
		int data;
		link *next;
	};
	link *sp;
	link head;
};

#endif

