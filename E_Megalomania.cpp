#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define lp(size) for (int i = 0; i < size; i++)
#define ai(thing) for(auto& i : thing) cin>>i;
#define au(thing) for(auto& i : thing)
#define lpeq(size) for (int i = 0; i <= size; i++)

using namespace std;

void solve()
{
    ll n;cin>>n;
    vector<pair<ll,ll>> v;
    lp(n)
    {
        ll a,b;cin>>a>>b;
        pair<ll,ll> p = {b,a};
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    ll time = v.back().first;
    for(ll i = v.size()-1 ; i >= 0 ; i--)
    {
        time = min(v[i].first,time);
        if(v[i].first >= v[i].second )time -= v[i].second;
        else
        {
            cout<<"No"<<endl;
            return;
        }
        if(time < 0)
        {
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_cases = 1;
    //cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
