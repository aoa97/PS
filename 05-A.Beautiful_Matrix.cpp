#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int num, steps = 0;
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cin >> num;
			if (num == 1) {
				steps = abs(i - 3) + abs(j - 3);
			}
		}
	}
	cout << steps << endl;
}
