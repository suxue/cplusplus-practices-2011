#include<iostream>
using namespace std;
class Stack{
	private:
		int *data;
		int count;
		int n;
		int temp[];
	public:
        Stack Add(int n){
		data=new int[n];
		count=0;
		int i=0;
			while(temp[i]){
               *data=temp[i];
	           data++;
		       i++;
			}

	}
        int push(int m){
			(++(*data))=m;
			count++;
				while(count>=n)
				cout<<"the number is too large"<<endl;

				int i;
				for(i=n;i>=0;i--){
					temp[i]=*data;
					data--;
				}

				n=n*2;
                 Add(n);

		}
        int pop(){
            cout<<((*data)--)<<endl;
			count--;
				while(count<=n/2)
				cout<<"the number is too small"<<endl;
                int temp[n];
                int i;
				for(i=n/2;i>=0;i--){
					temp[i]=*data;
					data--;
				}

				n=n/2;
				 Add(n);
        }
		bool isEmpty(){
			return(0==count);
		}
		bool isFull(){
			return(n==count);
		}

};
 int main()
{
    int n=100;
    Stack s;
    s.push(100);
    s.pop();
	s.isEmpty();
    s.isFull();
}



