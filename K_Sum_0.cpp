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
    vector<array<ll,4>> negative,mid,postive;
    lp(n)
    {
        ll l,r;cin>>l>>r;
        if(l < 0 && r < 0)
            negative.push_back({l,r,i});
        else if(l > 0 && r > 0)
            postive.push_back({l,r,i});
        else
            mid.push_back({l,r,i});
    }
    ll mnp = 0,mnn = 0;
    lp(postive.size()) mnp+=v[i][0];
    lp(negative.size()) mnn+=v[i][0];
    if(mnp > mnn*-1)
    {
        ll need = mnp + mnn;
        lp(negative.size())
        {
            need -= (negative[i][1]*-1 + negative[i][0]);
            if(need <= 0) break;
        }
        if(need > 0)
        {
            lp(mid.size())
            {
                need += mid[i][l];
                if(need <= 0) break;
            }
        }

        if(need <= 0)
        {

        }
    }
    else
    {
        
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
