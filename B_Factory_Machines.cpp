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
    ll n,t;cin>>n>>t;
    vector<ll> v(n);
    ai(v)
    ll high = 9e18, low = 1, ans = 0;
    while(high >= low)
    {   
        ll temp = 0, mid = (low+high)/2;
        for(auto i : v)
        {
            ll prod = mid/i;
            temp+= prod;
            if(temp >= t)
            {
                break;
            }
        }
        if(temp >= t)
        {
            high = mid-1;
            ans = mid;
        }
        else low = mid+1;
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
