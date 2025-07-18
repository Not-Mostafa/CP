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
    vector<bool> v(26);
    map<char,ll> m;
    while(n--)
    {
        string k;cin>>k;
        ll o = 1;
        for(int i = k.size()-1 ; i >= 0 ; i--)
        {
            m[k[i]] += o;
            o*=10;
            if(i == 0) v[k[i] - 'a'] = true;
        }
    }
    vector<pair<ll,char>> v2;
    for(auto i = m.begin() ; i != m.end() ; i++)
    {
        pair<ll,char> temp;
        temp.first = i->second;
        temp.second = i->first;
        v2.push_back(temp);
    }
    sort(all(v2));
    ll ans = 0 , temp = v2.size();
    //to find zero
    for(int i = v2.size()-1; i >= 0 ; i--)
    {
        if(!v[v2[i].second - 'a'])
        {
            v2[i].first = 0;
            temp--;
            break;
        }
    }
    lp(v2.size())
    {
        if(v2[i].first != 0)
        {
            ans+=temp*v2[i].first;
            temp--;
        }
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
