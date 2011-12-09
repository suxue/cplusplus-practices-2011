//============================================================================
// Name        : （1）方法1：升序排序（奇数在前）.cpp
// Author      : 黄治龙
// Description : 输入10个整数，将这10个整数按升序排列输出，并且奇数在前，偶数在后。
// in detail   : 数据结构为：数组；排序算法为：插入排序
//============================================================================

#include <iostream>
using namespace std;

int main() {		//函数入口
	void InsertSort(int a[],int m,int n);		//声明插入排序算法函数
	int i,j,a[10],temp;			//定义局部变量
	cout<<"Please input 10 integers"<<endl;			//输入10个数
	for(i=0;i<10;i++){
		cout<<"第"<<i<<"个数：";
		cin>>a[i];
	}
	j=9;
	for(i=0;i<=j;i++){			//对10个数进行奇数和偶数筛选，奇数放在数组前面，偶数放置在数组后面
		if(a[i]%2==0){
			for(;j>=i;j--){
				if(a[j]%2!=0){
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
					break;
				}
			}
		}
	}
	InsertSort(a,0,j);			//调用插入算法对奇数部分排序
	InsertSort(a,j+1,9);		//调用插入算法对偶数部分排序
	for(i=0;i<10;i++){			//结果输出
					cout<<"第"<<i<<"个数："<<a[i]<<endl;
				}
	return 0;
}

void InsertSort(int a[],int m,int n){			//插入算法
	int i,j,key;
	for(j=1+m;j<=n;j++){
		key=a[j];
		for(i=j-1;i>=m;i--){
			if(key<a[i])
				a[i+1]=a[i];
			else break;
		}
		a[i+1]=key;
	}
}


