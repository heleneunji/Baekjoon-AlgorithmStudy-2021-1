#include <iostream>
#include <stack>
using namespace std;

int main() {

    int n, sum = 0;
    stack<int> arr;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num == 0) {
            arr.pop();
        }
        else {
            arr.push(num);
        }
    }

    while(!arr.empty()) {
        sum = sum + arr.top();
        arr.pop();
    }

    cout << sum << endl;

    return 0;
}