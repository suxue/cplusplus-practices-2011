#include<iostream>
using namespace std;
struct dh{
	char name[20];
	char dialnumber[12];
};
main(){
struct dh shb[5];    //����һ���绰�� 
strcpy(shb[0].name,"����");
strcpy(shb[0].dialnumber,"13548951236");
strcpy(shb[1].name,"����");
strcpy(shb[1].dialnumber,"13535698741");
strcpy(shb[2].name,"����");
strcpy(shb[2].dialnumber,"13648851476");
strcpy(shb[3].name,"����");
strcpy(shb[3].dialnumber,"13982214782");
strcpy(shb[4].name,"�Ŵ���");
strcpy(shb[4].dialnumber,"15896521478");
char s[10]; 
cout<<"������Ҫ���ҵĵ绰��������������Բ���ȫ���룩:";
cin>>s;
int a,i;
char t1[20],t2[20];
a=strlen(s);
for(i=0;i<5;i++)  //�����еĵ绰��Ԫ�ؽ��б��� 
{
	strcpy(t1,shb[i].dialnumber);  //��������ַ��͵绰������бȽ� 
	t1[a]='\0';
    if(strcmp(s,t1)==0)
	cout<<shb[i].name<<"\t"<<shb[i].dialnumber<<"\n";
	strcpy(t2,shb[i].name);     //��������ַ������ֽ��бȽ�
	t2[a]='\0';
	if(strcmp(s,t2)==0)
	cout<<shb[i].name<<"\t"<<shb[i].dialnumber<<"\n";
}
}
