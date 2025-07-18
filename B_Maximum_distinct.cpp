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
    ll n,s;cin>>n>>s;
    string k;cin>>k;
    map<char,ll> m;
    ll ans = 0;
    ll l = 0,r = 0,size = 0,distinct = 0;
    while(r < n)
    {
        m[k[r]]++;
        size++;
        if(m[k[r]] == 1) distinct++;

        if(size > s) 
        {
            if(m[k[l]] == 1) distinct--;
            m[k[l]]--;
            l++;
            size--;
        }

        if(size == s)
            ans = max(ans,distinct);

        r++;
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
