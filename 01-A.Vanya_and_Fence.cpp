#include <iostream>
using namespace std;
int main() {
	int n, h, x, w = 0;
	cin >> n >> h;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x <= h)
			w += 1;
		else
			w += 2;
	}
	cout << w << endl;
}
