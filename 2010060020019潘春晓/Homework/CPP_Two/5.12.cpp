#include <iostream>
#include <string>

using namespace std;

int main()
{
	char b,c;
	char a[10];
	int n=10,i,j,s=0,m,h=0;
	char names[10][10]={"ËïÙ³","Ò¶Èı","Ãçì¿",
	"º«º®","ºÎ·«","²ÌÀ½","Áõ´ÈĞÀ",
	"Âí¶û¿ËË¹","Éòºê·Ç","Ğ¡±¦"};
	char numbers[10][15]={"010342323","13457829304","0283244212",
	"0274958392","071382739829","0628937298",
	"18923827198","18628078956","13808098457","15928959487"}; 
	cout<<"Please input everything you want to look for:"<<endl;
	gets(a);
	m=strlen(a);
	for(i=0;i<n;i++)
	
	{
		for(j=0;j<m;j++)
		{
			if(a[j]==names[i][j]||a[j]==numbers[i][j])
			s++;
		}
		if(s==m)
		{
			for(j=0;j<m;j++)
			{
				puts(names[i][]);
				cout<<endl;
				puts(numbers[i][]);
				cout<<endl;
			}
		}
	}
	return 0;
}