//******************************************************
//*                3MK The GOAT                        *                            
//******************************************************
#include <bits/stdc++.h>
using namespace std;
#define FIO ios ::sync_with_stdio(false), cin.tie(nullptr), cout.tie(NULL)
#define ll long long
#define ld long double
#define all(container) (container).begin(), (container).end()
#define cl(x,y)  (x + y - 1) / y
#define lp(size) for (ll i = 0; i < size; i++)
#define rlp(size) for (ll i = size - 1; i >= 0; i--)
#define ai(thing) for(auto& i : thing) cin>>i;
#define au(thing) for(auto& i : thing)
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
const int N = 1e5 + 5;
const int M = 1e9 + 7;
const ll OO = 0x3f3f3f3f3f3f3f3f;

void solve(ll n, const vll &input) {
    vll freq(n + 1, 0);
    for (ll x : input) freq[x]++;

    vector<bool> prefix_valid(n + 1, false);
    prefix_valid[0] = true;
    for (ll i = 1; i <= n; i++)
        prefix_valid[i] = prefix_valid[i - 1] && (freq[i - 1] > 0);

    vll delta(n + 2, 0);
    for (ll i = 0; i <= n; i++) {
        if (!prefix_valid[i]) continue;
        ll left = freq[i];
        ll right = n - i;
        if (left <= right) {
            delta[left]++;
            delta[right + 1]--;
        }
    }

    vll result(n + 1, 0);
    ll current = 0;
    for (ll i = 0; i <= n; i++) {
        current += delta[i];
        result[i] = current;
    }

    for (ll i = 0; i <= n; i++)
        cout << result[i] << (i == n ? '\n' : ' ');
}

int main() {
    FIO;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vll input(n);
        for (ll &x : input) cin >> x;
        solve(n, input);
    }
    return 0;
}
