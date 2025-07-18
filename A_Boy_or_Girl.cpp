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
    vector<int> p(26,0);
    ll ans = 0;
    lp(k.size())
    {
        if(p[k[i] - 'a'] == 0)
        {
            ans++;
            p[k[i] - 'a']++;
        
        }
    }
    cout<<((ans%2 == 0)? "CHAT WITH HER!\n":"IGNORE HIM!\n");
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
