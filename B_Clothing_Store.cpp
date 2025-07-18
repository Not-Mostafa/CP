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
    ll a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;
    ll ans = 0;
    if(c)
    {
        if(f > c) ans+=c,c = 0;
        else ans+=f,c-=f;
    }
    b+=c;
    if(b)
    {
        if(e > b) ans+=b,b = 0;
        else ans+=e,b-=e;
    }
    a+=b;
    if(a)
    {
        if(d > a) ans+=a,a = 0;
        else ans+=d,a-=d;
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
