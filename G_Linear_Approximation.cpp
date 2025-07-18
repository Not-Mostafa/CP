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

void solve()
{
    ll n;cin>>n;
    vll v(n);
    ai(v)
    lp(n) v[i] -= (i+1);
    ll r = 2e9,l = *min_element(all(v))-1 ,ans =OO;
    while(r - l > 2)
    {
        ll mid1 = l + (r-l)/3;
        ll mid2 = r - (r-l)/3;
        ll cost1 = 0 , cost2 = 0;
        lp(n)
            cost1+= abs(v[i] - mid1) , cost2+= abs(v[i] - mid2);
        ans = min(ans,min(cost1,cost2));
        if (cost1 < cost2)
            r = mid2;
        else
            l = mid1;
    }
    cout<<ans;
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
