#include <iostream>
using namespace std;

int main() {
   char *a;
   cout<<"�����ַ���:"<<endl;
   int i,s;
	      cin>>a;
for(i=0;;i++)
	   {if(*(a+i)==NULL)
			   break;
	   }

for( s=0;s<i/2;s++)
    {if(*(a+s)!=*(a+i-1-s))
    	break;
    }

    if (s==i/2)
    		{
   cout<<a<<"is huiwen!"<<endl;
    		}
    else
    	cout<<a<<":  is not huiwen!"<<endl;
	return 0;
}