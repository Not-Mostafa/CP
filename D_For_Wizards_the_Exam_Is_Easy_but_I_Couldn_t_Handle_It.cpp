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


vector<ll> shift(vector<ll> v, ll left, ll right)
{
    vector<ll> ans(v.size());
    for(int i = 0 ; i < left ; i++)
        ans.push_back(v[i]);
    for(int i = l+1 ; i < r ; i++)
        ans.push_back(v[i]);
    ans.push_back(v[r]);
    for(int i = right ; i < n ; i++)
        ans.push_back(v[i]);
    return ans;
}

ll count(vector<ll> v)
{
    vector<ll> vs(v.size());
    stack<pair<ll,ll>> s;
    lp(v.size())
    {
        if(s.size() && s.top() < v[i])
        {
            while(s.size() && s.top() < v[i])
            {
                vs+=
                vs[i]++;
                s.pop();
            }
        }
    }
}

void solve()
{
    ll n;cin>>n;
    vll v(n);
    ll r ,l;
    ll count = LLONG_MAX;
    ai(v)
    for(int i = 0 ; i < n;i++)
    {
        ll ans
        vector<ll> temp;
        for(int j = i ; j < n ; j++)
        {

        }
    }
    

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
