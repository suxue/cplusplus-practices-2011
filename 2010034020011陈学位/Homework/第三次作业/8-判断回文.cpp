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

bool ispalindrome(string s)
{
	int n=s.size();
	for(int i=0;i<n/2;i++){
		if(s[i]!=s[n-1-i])return false;
	}
	return true;
} 
int main(int argc, char *argv[])
{
	string str;
	while(cin>>str){
		if(ispalindrome(str)){
			cout<<"is a palindrome string\n";
		}
		else {
			cout<<"not a palindrome string\n";
		}
	}
	return 0;
}
