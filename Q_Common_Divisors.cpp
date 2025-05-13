#include <bits/stdc++.h>
using namespace std;
#define FIO ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(NULL)
#define ll long long
#define ld long double
#define all(container) (container).begin(), (container).end()
#define cl(x,y) (x + y - 1) / y
#define lp(size) for (int i = 0; i < size; i++)
#define rlp(size) for (int i = size - 1; i >= 0; i--)
#define ai(thing) for(auto& i : thing) cin>>i;
#define au(thing) for(auto& i : thing)
typedef vector<int> vi;
typedef vector<ll> vll;
const int N = 1e5 + 5;
const int M = 1e9 + 7;
const ll OO = 0x3f3f3f3f3f3f3f3f;

vector<vll> divisors(N);

void precompute() {
    for (ll i = 1; i < N; i++) {
        for (ll j = i; j < N; j += i) {
            divisors[j].push_back(i);
        }
    }
}

void solve() {
    precompute();
    ll n; cin >> n;
    vll a(n);
    ai(a);
    map<ll, ll> freq;
    ll ans = 1;
    
    lp(n) {
        for (ll d : divisors[a[i]]) {
            freq[d]++;
            if (freq[d] >= 2) {
                ans = max(ans, d);
            }
        }
    }
    cout << ans;
}

int main() {
    FIO;
    int test_cases = 1;
    //cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}