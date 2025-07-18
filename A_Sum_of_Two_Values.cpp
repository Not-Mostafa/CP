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
    int n;cin>>n;
    int k;cin>>k;
    vector<ll> v(n);
    ai(v)
    vector<pair<ll,ll>> m;
    lp(n)
    {
        pair<ll,ll> p = {v[i] , i+1};
        m.push_back(p);
    }   
    sort(all(m));
    sort(all(v));
    int l = 0 , r = n-1;
    while(l < r)
    {
        ll temp = v[l] + v[r];
        if(temp == k)
        {
            cout<<m[l].second<<" "<<m[r].second;
            return;
        }
        else if(temp > k) r--;
        else l++;
    }
    cout<<"-1";
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
