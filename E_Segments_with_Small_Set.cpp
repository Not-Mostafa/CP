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
const ll N = 1e5 + 5;
const ll M = 1e9 + 7;
const ll OO = 0x3f3f3f3f3f3f3f3f;

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto& i : v) cin>>i;
    ll r = 0,l = 0, ans = 0 , ct = 0;
    ll m[N] = {};
    while(r < n)
    {
        if(m[v[r]] == 0) ct++;
        m[v[r]]++;
        while(l <= r && ct > k)
        {
            m[v[l]]--;
            if(m[v[l]] == 0) ct--;
            l++;
        }
        ans+=(r-l+1);
        r++;
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
