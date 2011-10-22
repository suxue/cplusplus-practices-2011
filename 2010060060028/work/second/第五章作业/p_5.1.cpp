//第五章的作业一题
#include <iostream>
using namespace std;
void swap(int *a,int *b){
	int c;
	c=*a;*a=*b;*b=c;
}

void order1(int a[],int le,int rig){               //排序
	int i=le-1,j=rig+1;
	int mid=a[(le+rig)/2];
	if(le<rig){
		while(1)
		{
			while(a[++i]<mid&&i<=rig){

			}
		    while(a[--j]>mid&&j>le){

		    }
		    if(i<j){
		    	swap(&a[i],&a[j]);
		    }
		    else{
		    	break;
		    }
		}

		order1(&a[0],j+1,rig);
		order1(&a[0],le,j);
	}
}

int main(){
	int a[10];
	int i;
	cout<<"please input 10 number:"<<endl;
	for(i=0;i<10;i++){
		cout<<"a["<<i<<"]"<<"=";
		cin>>a[i];
	}
	i=0;
	order1(&a[0],0,9);
	cout<<"排序后："<<endl;
	for(i=0;i<10;i++){
			cout<<a[i]<<" ";

		}
	cout<<endl<<"按题目要求输出："<<endl;
	for(i=0;i<10;i++){
				if(a[i]%2!=0){
					cout<<a[i]<<" ";

				}

					}

	for(i=0;i<10;i++){
		if(a[i]%2==0){
			cout<<a[i]<<" ";

		}

			}


    return 0;
}


