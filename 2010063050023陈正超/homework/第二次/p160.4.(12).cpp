//============================================================================
// Name        :p160.4.(12).cpp
// Author      : st.king
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct tel {
	char name[30];
	char number[20];
} people[5] = { { "abcdefg", "123456" }, { "Abcd", "1235555" },{ "bcdasasd",
		"1234" },{ "bcd", "1234567" },{ "hjakd", "54" }

};

void search(char *a) {
	int i, len = strlen(a);
	if ((a[0] >= 0) && (a[0] <= 9)) {
		for (i = 0; i < 5; i++) {
			int j = 0;
			while ((people[i].number[j] == a[j]) && (j < len)) {
				j++;
			}
			if (j == len) {
				int k = 0;
				for (; k < strlen(people[i].name); k++) {
					cout << people[i].name[k];
				}
				cout << ' ';
				for (; k < strlen(people[i].number); k++) {
					cout << people[i].number[k];
				}
				cout << endl;
			}
		}
	} else if (((a[0] | 32) <= 'z') && ((a[0] | 32) >= 'a')) {
		for (i = 0; i < 5; i++) {
			int j = 0;
			while ((people[i].number[j] == a[j]) && (j < len)) {
				j++;
			}
			if (j == len) {
				int k = 0;
				for (k=0; k < strlen(people[i].name); k++) {
					cout << people[i].name[k];
				}
				cout << ' ';
				for (k=0; k < strlen(people[i].number); k++) {
					cout << people[i].number[k];
				}
				cout << endl;
			}
		}
	}
}

int main() {
    int a;
	search("abc");
	search("123");
	search("bcd");
	return 0;
}
