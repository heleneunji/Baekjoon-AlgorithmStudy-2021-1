#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, nn;
    vector <int> num;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> nn;
        num.push_back(nn);
    }

    sort(num.begin(), num.end());

    for (int i = 0; i < n; i++) {
        cout << num[i] << '\n';
    }

    return 0;
}