#include <iostream>
#include <string>

using namespace std;

class Item{
public:
	char *name,*num;
	Item(){
		name="";
		num="";
	}
	Item(char* name,char* num){
		this->name=name;
		this->num=num;
	}
	void show(){
		cout<<"name:"<<this->name<<"   telphone:"<<this->num<<endl;
	}
};

class TelBook{
private:
	Item elem[200];
public:
	int length;
	TelBook(){
		this->length=0;
	}
	void Search(char* value){
		int len;
		len=strlen(value);
		for(int i=0;i<length;i++){
			if(strncmp(elem[i].name,value,len)==0||strncmp(elem[i].num,value,len)==0)	elem[i].show();
		}
	}
	void Add(char* Name,char* Nu){
		if(length<200){
			elem[length].name=Name;
			elem[length].num=Nu;
			length++;
		}
	}
	void showBook(){
		int i;
		for(i=0;i<length;i++){
			elem[i].show();
		}
	}
};

void menu(){
	cout<<"***********************************************"<<endl;
	cout<<"*	      1.�����Ա		       "<<endl;
	cout<<"*	      2.������Ա			   "<<endl;
	cout<<"*	      3.��ʾ�绰��			   "<<endl;
	cout<<"*	      4.������һ�β˵�	       "<<endl;
	cout<<"*	      5.�˳�	       "<<endl;
	cout<<"***********************************************"<<endl;
}

int main(){
	int choice;
	char name[30],num[30];
	TelBook A;
	A.Add("Bob","0103220888");
	A.Add("June","0102429023");
	A.Add("Lee","02892893829");
	A.Add("Lucy","01012232112");
	A.Add("Keen","0289219231");
	while(1){
		menu();
		cout<<"****���������֣�ѡ����Ӧ��Ŀ"<<endl;
		cin>>choice;
		if(choice==1){
			cout<<"****������������";
			cin>>name;
			cout<<"****������绰���룺";
			cin>>num;
			A.Add(name,num);
		}
		else if(choice==2){
			char temp[30];
			cout<<"****��������Ҫ������Ա��������绰���루�ɲ������룩��";
			cin>>temp;
			A.Search(temp);
		}
		else if(choice==3){
			A.showBook();
		}
		else if(choice==4) continue;
		else exit(-1);
	}
}