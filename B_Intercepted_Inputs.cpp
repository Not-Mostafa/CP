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
    vector<ll> v(n);
    ai(v)
    sort(v.begin() , v.end());
    ll l = 0 , r = n-1;
    while(l < r)
    {
        ll temp = v[l] * v[r];
        if(temp == n-2)
        {
            cout<<v[l]<<" "<<v[r]<<endl;
            return ;
        }
        else if(temp > n-2)
            r--;
        else 
            l++;
    }
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
