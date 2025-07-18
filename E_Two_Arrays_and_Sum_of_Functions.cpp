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
#define mod 998244353
#define mod_mul(a, b) (( (a) % mod * (b) % mod) % mod)

ll foo(ll n){
    return n%mod;
}

void solve() {
    ll n;cin>>n;
    vll a(n),b(n);
    ai(a) ai(b)
    lp(n){
        a[i] = mod_mul(a[i], mod_mul(i + 1, n - i));
    }
    sort(all(b)); sort(all(a));
    ll ans = 0;
    lp(n){
        ans = (ans%mod + mod_mul(a[i], b[n-i-1])) % mod;
    }
    cout<<ans<<endl;
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
