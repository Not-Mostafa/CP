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
const ll OO = 0x3f3f3f3f3f3f3f3f;

void solve() {
    ll x;
    cin >> x;
    if ((x % 2 == 0) && (x & (x - 1))) {
        cout << x - 1 << '\n';
        return;
    }
    ll leading = 63 - __builtin_clzll(x);
    ll m = -1;
    for (ll i = leading - 1; i >= 0; --i) {
        if (!(x & (1LL << i))) {
            m = i;
            break;
        }
    }
    if (m == -1) {
        cout << -1 << '\n';
        return;
    }
    ll k = __builtin_ctzll(x);
    ll y = (1LL << m) | (1LL << k);
    if (y < x)
        cout << y << '\n';
    else 
        cout << -1 << '\n';
}

int main() {
    FIO;
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}