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
    ll n,m;cin>>n>>m;
    vector<vector<ll>> v; //size n
    lp(n)
    {
        vector<ll> temp(m);
        ai(temp)
        v.push_back(temp);
    }
    vector<pair<ll,ll>> ans(n);
    vector<ll> prefix(n);
    lp(n)
    {
        ll temp = 0;
        for(ll j = 0 ; j < m ; j++)
        {
            temp+=v[i][j];
            ans[i].first+=temp;
            ans[i].second = i;
        }
        for(ll j = 0 ; j < m ; j++)
        {
            prefix[i] += v[i][j];
        }
    }
    sort(all(ans));
    ll c = 0,k=n*m - m;
    rlp(n)
    {
        cout<<prefix[ans[i].second]<<" "<<k<<" "<<ans[i].first<<endl;
        c+= (prefix[ans[i].second]*k)+ans[i].first;
        k-=m;
    }
    cout<<c<<endl;
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
