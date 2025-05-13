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
    vll a(n),b(n);
    ai(a) ai(b)
    map<array<ll,3>,ll> m;
    ll ans = 0, k = 0;
    lp(n) {
        if (a[i] == 0) {
            if (b[i] == 0) {
                k++;
            }
            continue;
        }
        ll gc = gcd(abs(a[i]),abs(b[i]));
        ll ct = -1;
        if(a[i] < 0 && b[i] < 0) ct = -1;
        else if(b[i] < 0 || a[i] < 0) ct = 1;
        m[{ abs(a[i]/gc) , abs(b[i]/gc) , ct}]++;
        ans = max(ans,m[{ abs(a[i]/gc) , abs(b[i]/gc) , ct}]);
        
    }
    cout<<ans+k<<endl;
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
