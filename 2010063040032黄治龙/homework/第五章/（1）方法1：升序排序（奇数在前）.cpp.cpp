//============================================================================
// Name        : ��1������1����������������ǰ��.cpp
// Author      : ������
// Description : ����10������������10�������������������������������ǰ��ż���ں�
// in detail   : ���ݽṹΪ�����飻�����㷨Ϊ����������
//============================================================================

#include <iostream>
using namespace std;

int main() {		//�������
	void InsertSort(int a[],int m,int n);		//�������������㷨����
	int i,j,a[10],temp;			//����ֲ�����
	cout<<"Please input 10 integers"<<endl;			//����10����
	for(i=0;i<10;i++){
		cout<<"��"<<i<<"������";
		cin>>a[i];
	}
	j=9;
	for(i=0;i<=j;i++){			//��10��������������ż��ɸѡ��������������ǰ�棬ż���������������
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
	InsertSort(a,0,j);			//���ò����㷨��������������
	InsertSort(a,j+1,9);		//���ò����㷨��ż����������
	for(i=0;i<10;i++){			//������
					cout<<"��"<<i<<"������"<<a[i]<<endl;
				}
	return 0;
}

void InsertSort(int a[],int m,int n){			//�����㷨
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


