#include<iostream>

using namespace std;
void juage(char a[],int head,int nall){                           //�ݹ�

	if(nall<=head){
		cout<<"���ַ����ǻ��ģ�"<<endl;

	}
	else{
		if(a[head]==a[nall]){
				juage(&a[0],head+1,nall-1);
			}
			else{
				cout<<"���ַ������ǻ��ģ� "<<endl;
			}
	}


}
int main(){

	char a[21];
	int i=0;
	cout<<"pleas input a string (waring: the string can't over 20 letters and be chinese ):"<<endl;
	cin>>a;
	while(a[i]!='\0'){
			i++;   //��¼�ַ���Ŀ
		}
  juage(&a[0],0,i-1);
	return 0;
}
