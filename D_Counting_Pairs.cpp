#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define lp(size) for (int i = 0; i < size; i++)
#define ai(thing) for(auto& i : thing) cin>>i;
#define au(thing) for(auto& i : thing)
#define lpeq(size) for (int i = 0; i <= size; i++)

using namespace std;

void solve()
{
    int n;
    ll x, y;
    cin >> n >> x >> y;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    ll sum = 0;
    lp(n) sum+=v[i];
    ll L = sum - y;
    ll R = sum - x;
    sort(v.begin(), v.end());
    ll count = 0;
    for (int i = 0; i < n; i++) {
        ll left = L - v[i];
        ll right = R - v[i];
        int low = lower_bound(v.begin() + i + 1, v.end(), left) - v.begin();
        int high = upper_bound(v.begin() + i + 1, v.end(), right) - v.begin() - 1;
        if (low <= high) {
            count += (high - low + 1);
        }
    }
    cout << count << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
