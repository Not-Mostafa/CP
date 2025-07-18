#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define lp(size) for (int i = 0; i < size; i++)
#define ai(thing) for(auto& i : thing) cin>>i;
#define au(thing) for(auto& i : thing)
#define lpeq(size) for (int i = 0; i <= size; i++)

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    // Collect all the unique prices from both a and b
    vector<ll> prices;
    for (int i = 0; i < n; i++) {
        prices.push_back(a[i]);
        prices.push_back(b[i]);
    }

    // Sort the prices and remove duplicates
    sort(prices.begin(), prices.end());
    prices.erase(unique(prices.begin(), prices.end()), prices.end());

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll max_earnings = 0;

    // Try every possible price
    for (ll price : prices) {
        int positive_count = a.end() - lower_bound(a.begin(), a.end(), price);
        int negative_count = b.end() - lower_bound(b.begin(), b.end(), price)  - (a.end() - lower_bound(a.begin(), a.end(), price));
        if (negative_count <= k) {
            ll earnings = price * (positive_count + negative_count);
            max_earnings = max(max_earnings, earnings);
        }
    }
    cout << max_earnings << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
