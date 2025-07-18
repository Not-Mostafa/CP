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
    ll n, ans = 0;cin>>n;
    deque<ll> v(n);
    ai(v)
    ll mx = *max_element(all(v));
    if(n > 3) lp(n)
    {
        if ( (v[i] == mx) && (i != 1 && i != n-2) )
        {
            cout<<mx<<endl;
            return ;
        }
        else if(v[i] == mx)
        {
            ll temp = mx;
            if(i == 1)
                temp -=v[0];
            if(i == n-2)                    
                temp -= v[n-1]; 
            ans = max(temp,ans);
        }
    }
    else if (n == 2)
    {
        cout<<*max_element(all(v))-*min_element(all(v))<<endl;
        return ;
    }
    else
    {
        lp(n)
        {
            if(mx == v[i])
            {
                if(i == 2 || i == 0)
                {
                    cout<<mx<<endl;
                    return ;
                }
                else
                {
                    cout<<max(max(v[1]-v[2]-v[0],v[0]) , v[2])<<endl;
                    return ;
                }
            }
        }
    }
    
    cout<<ans<<endl;

}
int main() {
    FIO;
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
