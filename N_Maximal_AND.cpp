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

ll countf(vll v,ll indx)
{
    ll ct = 0;
    ll compar = 1<<indx;
    lp(v.size()) if((v[i]&compar) == compar) ct++;
    return ct;
}

void solve()
{
    ll n;cin>>n;
    ll k;cin>>k;
    vll v(n);
    ai(v) sort(all(v));
    ll ans = 0;
    ll sz = 31;
    vector<ll> freq(sz);
    lp(sz) freq[i] = countf(v,sz-1-i);
    lp(sz)
    {
        if(freq[i] == n)
        {
            ans = ans|(1<<sz-1-i);
        }
        else if(k >= n-freq[i])
        {
            ans = ans|(1<<sz-1-i);
            k-=n-freq[i];
        }
    }
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
