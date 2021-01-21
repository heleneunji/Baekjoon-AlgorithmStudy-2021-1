#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

pair<pair<string, int>, pair<int, int>> info[1000001];

bool cmp(pair<pair<string, int>, pair<int, int>> a, pair<pair<string, int>, pair<int, int>> b) {
    if (a.first.second > b.first.second)
        return true;
    else if (a.first.second == b.first.second) {
        if (a.second.first < b.second.first)
            return true;
        else if (a.second.first == b.second.first) {
            if (a.second.second > b.second.second)
                return true;
            else if (a.second.second == b.second.second)
                if (a.first.first < b.first.first)
                    return true;
        }
    }
    return false;
}

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> info[i].first.first >> info[i].first.second >> info[i].second.first >> info[i].second.second;
    }

    sort(info, info + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << info[i].first.first << '\n';
    }

    return 0;
}