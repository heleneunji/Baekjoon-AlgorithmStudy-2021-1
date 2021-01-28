#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int n, max = 0, count = 0;

	cin >> n;

	int height[100001];

	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}


	for (int i = n-1; i >= 0; i--) {
		if (max < height[i]) {
			max = height[i];
			count++;
		}
	}

	cout << count << endl;

	return 0;
}