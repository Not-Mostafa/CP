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
    int n,k; cin>>n>>k;
    set<ll> s = {0};
    vector<ll> v(n);
    ai(v)
    for (int i = 0; i < k; i++) {
        ll x = *s.begin();
        s.erase(s.begin());
        for (int j = 0; j < n; j++) {
            s.insert(x + v[j]);
        }
    }
    cout<<*s.begin();
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_cases = 1;
    //cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
