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
    ll ans = 0;
    ll n,m;cin>>n>>m;
    vector<vll> v(m);
    lp(m){
        ll x;cin>>x;
        v[i].push_back(x);
        for(int j = 0; j < v[i][0] ; j++){
            cin>>x;
            v[i].push_back(x);
        }
    }
    vll bulbs(m);
    ai(bulbs)

    for(int mask = 0 ; mask < (1<<n); mask++){
        ll num = 0;
        lp(m) {
            bool flag = false;
            ll cnt = 0;
            for(int switchs = 1 ; switchs <= v[i][0];switchs++){
                if( 1&(mask>>(v[i][switchs] - 1)) ) cnt++;
            }
            if(cnt%2 != bulbs[i]%2) break;
            else num++;
        }
        if(num == m) ans++;
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
