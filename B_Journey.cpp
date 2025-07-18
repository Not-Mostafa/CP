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
    ll n,a,b,c;cin>>n>>a>>b>>c;
    ll ans = (n/(a+b+c));
    n -= (ans)*(a+b+c);
    ans*=3;
    if(n > 0)
    {
        ans++;
        n-=a;
    }
    if(n > 0)
    {
        ans++;
        n-=b;
    }
    if(n > 0)
    {
        ans++;
        n-=c;
    }
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
