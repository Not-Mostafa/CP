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
    string k;cin>>k;
    lp(k.size())
    {
        ll t = i;
        ll b = i-1;
        while(t > 0 && k[t]-1 > k[b])
        {
            k[t]--;
            swap(k[t],k[b]);
            b--;
            t--;
        }
    }

    cout<<k<<endl;
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
