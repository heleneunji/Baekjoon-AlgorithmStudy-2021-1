#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, nn, k;
    vector <int> num;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> nn;
        num.push_back(nn);
    }

    cin >> k;

    k = n / k;
    for (auto it = num.begin(); it != num.end();) {
        sort(it, it + k);
        it += k;
    }

    for (int i = 0; i < n; i++) {
        cout << num[i] << ' ';
    }

    return 0;
}