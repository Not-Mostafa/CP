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
    vector<int> a(n),b(n);
    ai(a) ai(b)
    ll o = 0, z = 0,o1 = 0 ,z1 = 0;
    lp(n)
    {
        if(a[i] == 1) o++;
        else z++;
        if(b[i] == 1) o1++;
        else z1++;
    }

    ll diff = (abs(z-z1) + abs(o-o1))/2;

    ll temp = 0;
    lp(n)
    {
        if(a[i] != b[i])temp++;
    }

    ll ans = min(temp,diff);
    //cout<<diff<<" "<<temp<<endl;
    if(temp > diff)
        ans++;

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
