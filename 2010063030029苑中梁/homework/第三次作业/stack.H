#include<iostream.h>
using namespace std;
class stack{
	private
		int *data;
		int count;
	public
        stack(size){
		*data=new int[size];
		count=0;
		int i=0
			while(temp[i]){
               *data=temp[i];
	           data++;
		       i++;
			}
		
	}
        void push(int IN){
			(++(*data))=IN;
			count++
				while(count>=size)
				cout<<"the number is too large"<<endl;
				int temp[size];
				for(i=size;i>=0;i--){
					temp[i]=*data;
					data--;
				}
				delete stack;
                return new stack(size*2);

		}
        int pop(){
            cout<<((*data)--)<<endl;
			count--;
				while(count<=size/2)
				cout<<"the number is too small"<<endl;
                int temp[size];
				for(i=size/2;i>=0;i--){
					temp[i]=*data;
					data--;
				}
				delete stack;
				return new stack(size/2);

		bool isEmpty
			return(0==count);
		bool isFull
			return(size==count);
		
}
 


