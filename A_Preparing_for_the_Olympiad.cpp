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
    ll n,ans = 0;cin>>n;
    vector<int> a(n),b(n);
    ai(a) ai(b)
    ans+=a[n-1];
    lp(n-1)
    {
        if(a[i] > b[i+1])
        {
            ans+=(a[i]-b[i+1]);
        }
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
