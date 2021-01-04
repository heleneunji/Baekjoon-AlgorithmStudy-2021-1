#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int a[9];
	int b;
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> a[i];
		sum += a[i];
	}

	sort(a, a + 9);
	for (int i = 0; i < 9; i++) {
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (sum - a[i] - a[j] == 100) {
				if (i != j) {
					for (int k = 0; k < 9; k++) {
						if (k == i || k == j) {
							continue;
						}
						cout << a[k] << endl;
					}
					return 0;
				}
			}
				
		}
	}

	return 0;
}