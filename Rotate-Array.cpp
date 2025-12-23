#include <bits/stdc++.h>
using namespace std;

void reversePart(vector<int>& a, int l, int r) {
    while (l < r) swap(a[l++], a[r--]);
}

int main() {
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> k;

    k %= n; // handle k > n

    // Left rotation
    reversePart(a, 0, k - 1);
    reversePart(a, k, n - 1);
    reversePart(a, 0, n - 1);

    for (int x : a) cout << x << " ";
    return 0;
}
