#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, z, m, mm = 0; // 필드 수, 도착해야하는 필드 번호, 장애물 필드 개수, 장애물 위치
    int k = 0; // k만큼씩 이동
    int ms[1000] = { 0 }; // 장애물 필드 위치 배열
    int now = 1; // 현재 위치
    bool notthis = false;
    int count = 0;

    cin >> n >> z >> m;

    for (int i = 0; i < m; i++) {
        cin >> mm;
        ms[i] = mm;
    }

    for (int i = 1; i < n; i++) {
        while (notthis == false) {
            now = (now + i) % n;
            count++;
            if (now == 0) { now = n; }
            for (int j = 0; j < m; j++) {
                if (now == ms[j]) {
                    notthis = true;
                    break;
                }
            }
            if (now == z) {
                cout << i;
                return 0;
            }
            if (count == n) break;
        }
        notthis = false;
        count = 0;
        now = 1;
    }

    return 0;
}