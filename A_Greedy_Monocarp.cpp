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
    int n;cin>>n;
    int k;cin>>k;
    vector<ll> v(n);
    ai(v)
    sort(v.begin(),v.end());
    ll ans = 0,now = 0;
    for(int i = n-1;i >= 0 ; i--)
    {
        if(now+v[i] <= k)
        {
            now+=v[i];
        }
        else
        {
            break;
        }
    }
    ans+=k-now;
    if(ans  < 0)ans = 0;
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
