#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    int e = a * b * c;
    int d[10] = {};
    while (e > 0) {
        d[e % 10]++;
        e /= 10;
    }
    for (int i = 0; i < 10; ++i) {
        cout << d[i] << '\n';
    }
}