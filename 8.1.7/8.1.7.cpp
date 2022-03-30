#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int Count(const string str, char* s)
{
	int z = 0;
	for (int i = 0; i < 5;i++) {
		for (int j = 0;j < 102;j++) {
			if (s[i] == str[j]) {
				z++;
				if (z == 5) {
					return z;
				}
				break;
			}
		}
	}
	return z;
}

int main()
{
	string str;
	char s[] = "while";
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "there are " << Count(str, s) << "/5 " << "letters in the word 'while' " << endl;
	return 0;
}