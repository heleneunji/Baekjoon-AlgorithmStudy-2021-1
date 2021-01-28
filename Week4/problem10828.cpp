#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int n;

	cin >> n;

	vector <int> commandstack;

	for (int i = 0; i < n; i++) {
		string command;
		cin >> command;

		if (command == "push") {
			int num;
			cin >> num;
			commandstack.push_back(num);
		}
		else if (command == "pop") {
			if (commandstack.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << commandstack.back() << "\n";
				commandstack.pop_back();
			}
		}
		else if (command == "size") {
			cout << commandstack.size() << "\n";
		}
		else if (command == "empty") {
			cout << commandstack.empty() << "\n";
		}
		else if (command == "top") {
			if (commandstack.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << commandstack.back() << "\n";
			}
		}
	}

	return 0;
}