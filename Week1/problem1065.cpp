#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int a;
	int num = 0;

	cin >> a;

	for (int i = 1; i <= a; i++) {
		if (i > 99) {
			if (((i / 100) - ((i % 100) / 10)) == (((i % 100) / 10) - ((i % 100) % 10)))
			num += 1;
			else continue;
		}
		else {
			num += 1;
		}
	}

	cout << num << endl;

	return 0;
}