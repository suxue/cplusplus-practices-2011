#include<iostream>
using namespace std;
int main()
{
  int n;
   cout<<"���������"<<endl;
  for(n='A';n<='Z';n++) {
      cout<<(char)n<<'\t';
  }
  cout<<endl<<"���������"<<endl;
   for(n='Z';n>='A';n--) {
      cout<<(char)n<<'\t';
  }
  system("pause");
}
