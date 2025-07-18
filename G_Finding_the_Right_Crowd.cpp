#include <bits/stdc++.h>
using namespace std;
#define FIO ios ::sync_with_stdio(false), cin.tie(nullptr), cout.tie(NULL)
#define ll long long
#define ld long double
#define all(container) (container).begin(), (container).end()
#define cl(x,y)  (x + y - 1) / y
#define lp(size) for (int i = 0; i < size; i++)
#define rlp(size) for (int i = size - 1; i >= 0; i--)
#define ai(thing) for(auto& i : thing) cin>>i;
#define au(thing) for(auto& i : thing)
typedef vector<int> vi;
typedef vector<ll> vll;
const int N = 1e5 + 5;
const int M = 1e9 + 7;

typedef vector<ll> vll;

void solve() {
    ll n;
    cin >> n;
    vector<vll> v(n), pre(n);

    for (int i = 0; i < n; i++) {
        ll m;
        cin >> m;
        vll temp(m);
        for (auto &x : temp) cin >> x;
        sort(all(temp)); 
        v[i] = temp;
        pre[i] = vll(m);
        pre[i][0] = v[i][0];

        for (int j = 1; j < m; j++) {
            pre[i][j] = pre[i][j - 1] + v[i][j];
        }
    }

    ll q;
    cin >> q;
    while (q--) {
        ll query;
        cin >> query;

        ll min_cost = LLONG_MAX, best_group = -1;

        for (int i = 0; i < n; i++) {
            ll m = v[i].size();
            ll pos = upper_bound(all(v[i]), query) - v[i].begin();
            ll cost = 0;
            if (pos > 0) {
                cost += query * pos - pre[i][pos - 1];
            }
            if (pos < m) {
                cost += (pre[i][m - 1] - (pos > 0 ? pre[i][pos - 1] : 0)) - query * (m - pos);
            }

            if (cost < min_cost) {
                min_cost = cost;
                best_group = i + 1;  // 1-based index
            }
        }

        cout << best_group << " ";
    }
}

int main() {
    FIO;
    solve();
    return 0;
}
