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
    ld n,k;cin>>n>>k;
    vector<ld> v(n);
    ai(v)
    ld high = 1000, low = 0,ans;
    while(high - low >= 2e-7)
    {
        ld mid = (high+low)/2;
        ld have = 0;
        ld needed = 0;
        lp(n)
        {
            if(v[i] >= mid)
            {
                have += (v[i] - mid)*(1-k/100);
            }
            else
            {
                needed += (mid - v[i]);
            }
        }
        //cout<<mid<<" "<<have<<" "<<needed<<endl;
        if(needed > have)
        {
            high = mid;
        }
        else
        {
            ans = mid;
            low = mid;
        }
    }
    cout<<fixed<<setprecision(9)<<ans;
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
