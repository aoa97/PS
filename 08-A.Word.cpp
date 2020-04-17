#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	string word;
	int caps = 0, smalls = 0;
	cin >> word;
	for (int i = 0; i < word.length(); i++) {
		if (word[i] >= 65 && word[i] <= 90)
			caps++;
		else
			smalls++;
	}
	for (int i = 0; i < word.length(); i++) {
		if (caps > smalls)
			word[i] = toupper(word[i]);
		else
			word[i] = tolower(word[i]);
	}
	cout << word << endl;
	return 0;
}
