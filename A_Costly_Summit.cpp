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
    ll n,c;cin>>n>>c;
    string k;cin>>k;
    vector<ll> v(26);
    ll ct = 0;
    lp(n)
    {
        v[k[i] - 'A']++;
        if(v[k[i] - 'A'] == 1) ct++;
    }
    sort(all(v));
    ll ans = 0 , trans = 0;
    lp(26)
    {
        if((v[i]+trans) * (trans+1+v[i]) /2 - (trans) * (trans+1) /2  < c) trans+=v[i]; // 2
        else ans+=c;
    }
    cout<<ans + trans*(trans+1)/2<<endl;
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
