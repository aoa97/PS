#include <iostream>
using namespace std;
int main() {
	int n, prev = 0, current, groups = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> current;
		if (current != prev)
			groups++;
		prev = current;
	}
	cout << groups << endl;
}
