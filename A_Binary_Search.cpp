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
    vll a(n),b(k);ai(a) ai(b)
    lp(k)
    {
        ll l = 0 , r = a.size()-1,c = b[i];
        bool flag = false;
        while(l<=r)
        {
            ll mid = l+(r-l)/2;
            if(a[mid] > c) r = mid-1;
            else if(a[mid] == c) {
                cout<<"YES\n";
                flag = true;
                break;
            }
            else l = mid+1;
        } 
        if(!flag)cout<<"NO\n";
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
