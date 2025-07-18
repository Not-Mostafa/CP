#include <bits/stdc++.h>
using namespace std;
#define FIO ios ::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define ll long long
#define ai(x) for (auto &i : x) cin >> i;

bool can_collect_with(const vector<ll>& a, const vector<ll>& b) {
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] >= b[j]) j++;
        i++;
    }
    return j == b.size();
}

bool can_collect_by_skipping_one(const vector<ll>& a, const vector<ll>& b, ll& min_k) {
    int m = b.size();
    bool found = false;
    for (int skip = 0; skip < m; ++skip) {
        int i = 0, j = 0;
        int n = a.size();
        while (i < n && j < m) {
            if (j == skip) { j++; continue; }
            if (j < m && a[i] >= b[j]) j++;
            i++;
        }
        if (j == m) {
            min_k = min(min_k, b[skip]);
            found = true;
        }
    }
    return found;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    ai(a) ai(b)
    sort(b.begin(), b.end());

    if (can_collect_with(a, b)) {
        cout << 0 << '\n';
        return;
    }

    ll ans = LLONG_MAX;
    if (can_collect_by_skipping_one(a, b, ans)) {
        cout << ans << '\n';
    } else {
        cout << -1 << '\n';
    }
}

int main() {
    FIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
