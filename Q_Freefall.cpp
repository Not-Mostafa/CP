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
    ll a,b;cin>>a>>b;
    ll r = a/b,l = -1;
    ld ans = a/sqrt(1);
    while(r - l > 2)
    {
        ll mid1 = l + (r-l)/3;
        ll mid2 = r - (r-l)/3;
        
        ld cost1 = mid1*b+a/sqrt(mid1+1) , cost2 = mid2*b+a/sqrt(mid2+1);
        //cout<<fixed<<setprecision(11)<<cost1<<" "<<cost2<<endl;

        ans = min(ans,min(cost1,cost2));
        if (cost1 < cost2)
            r = mid2;
        else
            l = mid1;
    }
    cout<<fixed<<setprecision(10)<<ans;
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
