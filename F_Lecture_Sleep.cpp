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
    int n;cin>>n;
    int k;cin>>k;
    vector<ll> v(n),s(n);
    ai(v) ai(s)
    ll ans = 0;
    lp(n)
    {
        if(s[i] == 1)
        {
            ans+=v[i];
        }
    }
    ll temp = 0,temp1 = 0;
    lp(k)
        if(s[i] == 0) temp+=v[i];
    for(int i = k ; i < n ; i++)
    {
        if(s[i-k] == 0) temp-=v[i-k];
        if(s[i] == 0) temp+=v[i];
        temp1 = max(temp,temp1);
    }
    temp1 = max(temp,temp1);
    cout<<ans+temp1;
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
