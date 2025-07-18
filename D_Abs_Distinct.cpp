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
    vll v(n);
    ai(v)
    ll l = 0,r = n-1,ans = 0;
    while(l <= r)
    {
        ans++;
        if(v[l]*-1 == v[r] || v[l] == v[r])
        {
            l++;
            r--;
            while(l < n && v[l] == v[l-1]) l++;
            while(r >= 0 && v[r] == v[r+1]) r--;
        }
        else if(v[l]*-1 > v[r]) { l++; while(l < n && v[l] == v[l-1]) l++; }
        else { r--; while(r >= 0 && v[r] == v[r+1]) r--; }
    }
    cout<<ans<<endl;
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
