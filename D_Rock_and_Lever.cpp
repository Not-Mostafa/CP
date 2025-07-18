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

ll fun(ll x){
    ll temp = 1;
    ll max;
    lp(40){
        if( (x&1<<i) == x ){
            max = i;
        }
    }
    return max+1;
}

void solve()
{
    ll n;cin>>n;
    vll v;
    ai(v)
    vector<ll> freq(41,0);
    ll ans = 0;
    lp(n) freq[fun(v[i])]++;
    lp(40) ans += (pow(freq[i],2));
    cout<<ans<<endl;
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
