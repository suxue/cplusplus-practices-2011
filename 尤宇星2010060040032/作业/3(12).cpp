#include <iostream>
using namespace std;
int main() {
	int i,j;
	cout <<"please input quantity and distance(输入数据要有符合实际):";
	cin >>i>>j;
	if(i>=0&&i<=30) cout <<"cost is:"<< 5;
	if(i>=30&&i<=45) cout <<"cost is:"<< 9;
	if(i>=45&&i<=60) cout <<"cost is:"<< 12;
	if(i>=60&&i<=75) cout <<"cost is:"<<j/1000+14;
	if(i>=75) cout <<"cost is:"<<j/1000+15;
	return 0;
}
