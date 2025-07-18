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
    string s,t;cin>>s>>t;
    ll ans = LONG_LONG_MAX,left = 0,right = t.size()-1;
    while(right != s.size() && ans != 0)
    {
        ll temp = 0;
        for(int i = 0; i < t.size(); i++)
        {
            if(t[i] != s[i+left])
            {
                temp++;
            }
            if(temp >= ans)
            {
                break;
            }
        }
        ans = min(ans,temp);
        left++;
        right++;
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
