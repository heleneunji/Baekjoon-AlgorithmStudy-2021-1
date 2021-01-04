#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int num;
	pair<int, int> arr[50];
	int a[50];

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> arr[i].first >> arr[i].second;
	}

	for (int i = 0; i < num; i++) {
		int k = 0;
		for (int j = 0; j < num; j++) {
			if ((arr[j].first > arr[i].first) && (arr[j].second > arr[i].second))
				k += 1;
		}
		a[i] = k + 1;
	}

	for (int i = 0; i < num; i++) {
		cout << a[i] << " ";
	}

	return 0;
}