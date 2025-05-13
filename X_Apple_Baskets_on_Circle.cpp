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
    ll n,k;cin>>n>>k;
    vector<ll> v(n);
    ai(v)
    ll high = 2e12, low = 1 , ans , last;
    while(high >= low)
    {
        ll mid = low+(high-low)/2;
        ll temp = 0;
        lp(n)
        {
            if(temp > k) break;
            if(mid >= v[i]) temp += v[i];
            else temp += mid;
        }
        if(temp >= k)
        {
            high = mid-1;
            ans = mid;
        }
        else low = mid+1;
    }
    ll temp = 0;
    ans--;
    lp(n)
    {
        if(ans >= v[i]) 
        {
            temp += v[i];
            v[i] = 0;
        }
        else
        {
            temp += ans;
            v[i] = v[i]-ans;
        }
        //cout<<v[i]<<" ";
    }
    //cout<<endl<<temp<<endl;
    lp(n)
    {
        if(temp != k) 
        {
            cout<<max(0ll,v[i]-1)<<" ";
            if(max(0ll,v[i]) != 0) temp++;
        }
        else cout<<v[i]<<" ";
    }


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
