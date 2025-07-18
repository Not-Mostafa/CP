#include <bits/stdc++.h>
using namespace std;
#define FIO ios ::sync_with_stdio(false), cin.tie(nullptr), cout.tie(NULL)
#define ll long long
#define ld long double
#define all(container) (container).begin(), (container).end()
#define s(container) sort((container).begin(), (container).end());
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
    vector<ll> a(n),b(n),c(n),d(n),e(n);
    ai(a) ai(b) ai(c)
    s(a) s(b) s(c)
    ll ans = 0;
    lp(n)
    {
        d[i] = c.end() - upper_bound(all(c),b[i]);
    }
    lp(n)
    {
        e[i] = lower_bound(all(a),b[i]) - a.begin();
    }
    lp(n)
    {
        ans+=e[i]*d[i];
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
