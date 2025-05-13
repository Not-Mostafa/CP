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

ll ct(ll k)
{
    ll n = 1;
    ll ans = 0;
    lp(62)
    {
        if(k& n<<i) ans++;
    }
    return ans;
}

void solve()
{
    string k;cin>>k;
    string k2 = k;
    lp(k.size())
    {
        if(isupper(k2[i])) k2[i] = tolower(k2[i]);
        else k2[i] = toupper(k2[i]);
    }
    ll q;cin>>q;
    while(q--)
    {
        ll indx;cin>>indx;
        indx--;
        ll block = (indx)/k.size();
        if(ct(block) %2 == 0)
        {
            cout<<k[indx%k.size()]<<" ";
        }
        else 
        {
            cout<<k2[indx%k.size()]<<" ";
        }
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
