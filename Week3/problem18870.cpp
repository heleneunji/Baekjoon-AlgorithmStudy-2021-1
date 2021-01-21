#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> num(n);

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    vector<int> grade(num);

    sort(grade.begin(), grade.end());

    grade.erase(unique(grade.begin(), grade.end()), grade.end());

    for (int i = 0; i < n; i++)
    {
        cout << (lower_bound(grade.begin(), grade.end(), num[i]) - grade.begin()) << ' ';
    }

    return 0;
}