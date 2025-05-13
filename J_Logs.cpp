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
    int n,k;cin>>n>>k;
    vll v(n);
    ai(v)
    ll high = 2e9,low = 0,ans,mid;
    while(high >= low)
    {
        mid = low+(high-low)/2;
        ll temp = 0;
        lp(n)
        {
            ld k = v[i]/mid;
            if(v[i] % mid == 0)k--;
            temp += k;
        }
        if(temp <= k)
        {
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
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
