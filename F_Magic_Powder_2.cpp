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
    ll n,k;cin>>n>>k;
    vector<ll> a(n),b(n);
    ai(a) ai(b)
    ll ans, left = 0, right = 2e9;
    while(left <= right)
    {
        bool flag = false;
        ll mid = (left+right)/2,needed = 0;
        lp(n)
        {
            ll req = max(mid * a[i] - b[i], 0LL);
            if (req > k - needed) // Prevent overflow
            {
                flag = true;
                break;
            }
            needed += req;
        }
        if(needed > k || flag)
        {
            right = mid-1;
        }
        else if(needed <= k)
        {
            left = mid+1;
            ans = mid;
        }
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
