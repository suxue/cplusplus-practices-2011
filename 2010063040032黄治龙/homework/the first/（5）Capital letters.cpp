//============================================================================
// Name        : （5）Capital letters.cpp
// Author      : 黄治龙
// Description : 编写程序分别正向、逆向输出26个大写英文字母
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char letters='A';
	int i;
	for(i=0;i<26;i++)
	{
		cout << letters << endl;
		letters+=1;
	}
	for(i=0;i<26;i++)
	{
		letters-=1;
		cout << letters << endl;
	}
	return 0;
}
