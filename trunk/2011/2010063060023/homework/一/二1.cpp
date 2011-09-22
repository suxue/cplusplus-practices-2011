#include<iostream>
using namespace std;
int main()
{
  int n;
   cout<<"正向输出："<<endl;
  for(n='A';n<='Z';n++) {
      cout<<(char)n<<'\t';
  }
  cout<<endl<<"逆向输出："<<endl;
   for(n='Z';n>='A';n--) {
      cout<<(char)n<<'\t';
  }
  system("pause");
}
