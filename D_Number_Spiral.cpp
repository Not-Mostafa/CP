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
    while(n--)
    {
        ll h,v;cin>>h>>v;
        ll ans;
        if(h < v)
        {
            if(v%2 == 0)
            {
                ans = (v-1)*(v-1)+1;
            }
            else
            {
                ans = v*v;
            }
            if(h != 1)
            {
                if(v%2 == 0)
                {
                    ans +=(h-1) ;
                }
                else
                {
                    ans -= (h-1);
                }
            }

        }
        else
        {
            if(h%2 == 0)
            {
                ans = h*h;
            }               
            else
            {
                ans = (h-1)*(h-1)+1;
            }
            if(v != 1)                
            {
                if(h%2 == 0)
                {
                    ans -=(v-1) ;
                }
                else                    
                {
                    ans += (v-1);
                }
            }
        }
        cout<<ans<<endl;
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