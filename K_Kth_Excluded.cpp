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
    ll n,q;cin>>n>>q;
    vector<ll> v(n);
    ai(v)
    sort(all(v));
    while(q--)
    {
        ll x;cin>>x;
        ll left = x , right = 2e18 , ans;
        while(left <= right)
        {
            ll mid = (right+left)/2;
            ll dist = distance(v.begin(),upper_bound(all(v) , mid));
            if(mid-dist >= x)   
            {
                ans = mid;
                right = mid-1;

            }
            else if (mid-dist < x)
                left = mid+1;      
        } 
        cout<<ans<<endl;
    }
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
