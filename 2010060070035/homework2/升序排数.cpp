#include <iostream>

using namespace std;
//����Ҫ�� ����10���� �������� ������ǰ
int main(){

	int arr[10];
	//��ʼ������ 
	for(int i=0;i<10;i++){
		
		arr[i]=0;
	
	} 
	//�ֶ���ʼ��	
	for(int i=0;i<10;i++){
		
		cin>>arr[i];

	}
	int j=0;
	//������� ���� ����ǰ 
	for(int i=0;i<10;i++){
		
		if(arr[i]%2==1){
			int temp;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			j++;
		}
	}
	
	
	
	
	//�������������� 
	for(int i=0;i<j-1;i++){
		for(int k=i+1;k<j;k++){

		if(arr[i]>arr[k]){
			int t;
			t=arr[i];
			arr[i]=arr[k];	
			arr[k]=t;
		}

		}		
			}

	//��ż���������� 
	for(int i=j;i<9;i++){
		for(int p=i+1;p<10;p++){

		if(arr[i]>arr[p]){
			int t;
			t=arr[i];
			arr[i]=arr[p];	
			arr[p]=t;
		}

		}		
			}

	for(int i=0;i<10;i++){
		cout<<arr[i]<<"\n";
	}
	
	


return 1;
}//end main
