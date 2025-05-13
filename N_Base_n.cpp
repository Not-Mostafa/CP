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

ll calculateValue(const string &x, ll base, ll m) {
    ll ans = 0;
    for (char c : x) {
        if (ans > m / base) return m + 1; 
        ans *= base;
        ans += c - '0';
        if (ans > m) return m + 1;
    }
    return ans;
}

void solve()
{
    string x;
    ll n; cin>>x>>n;
    if(x.size()==1){
        if(x[0] - '0' > n) cout<<0;
        else cout<<1;
        return ;
    }
    ll high = n+1,low = 1,mid,ans;
    lp(x.size()) if((x[i]-'0') > low) low = (x[i]-'0');
    ll final = low;
    ans = final;
    low++;
    while(high >= low)
    {
        mid = low + (high - low)/2;
        ll ansT = calculateValue(x, mid, n);
        if(ansT <= n)
        {
            ans = mid;
            low = mid+1;
        }
        else high = mid-1;
    }
    ans -= final;
    ans = max(0ll,ans);
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
