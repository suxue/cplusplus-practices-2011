#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

const double EP=1E-10;
const double PI=acos(-1);
int DG(int num)
{
	if(num==1)return 1;
	return DG(num-2)+num;
}
int main(int argc, char *argv[])
{
	cout<<DG(99)<<endl;
	return 0;
}