#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, A = 0, D = 0;
	string s;
	cin >> n >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A')
			A++;
		else
			D++;
	}
	if (A > D)
		cout << "Anton" << endl;
	else if (D > A)
		cout << "Danik" << endl;
	else
		cout << "Friendship" << endl;
}
