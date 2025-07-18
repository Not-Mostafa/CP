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
    ll a[n];
    ai(a)
    ll ans = 0;
    bool values = false;
    lp(n) {
        if(a[i] != 0)
        {
            if(!values)
            {
                values = true;
                ans++;
            }
        }
        else values = false;
    }
    if(ans > 2) ans = 2;
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
