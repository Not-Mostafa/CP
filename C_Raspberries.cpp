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
    vll v(n);
    ai(v)
    if(k == 2)  
    {
        ll even = 0,odd = 0;
        lp(n)
        {
            if(v[i]%2 == 0)
            {
                even++;
            }
            else odd++;
        }
        cout<<((even > 0)?'0':'1')<<endl;
    }
    else if(k == 3 || k == 5)
    {
        ll temp = LONG_LONG_MAX;
        lp(n)
        {
            if(v[i]%k == 0)
            {
                cout<<0<<endl;
                return ;
            }
            else temp = min(temp ,k - v[i]%k);
        }
        cout<<temp<<endl;
    }
    else if (k == 4)
    {
        ll even = 0,odd = 0,temp = 0;
        lp(n)
        {
            
            if(v[i]%4 == 0)
            {
                cout<<0<<endl;
                return ;
            }
            if(v[i]%2 == 0)
            {
                even++;
            }
            else odd++;
            if((v[i]+1)%4 == 0)
            {
                temp = 1;
            }
        }
        if(even > 1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if(temp || (even == 1 && odd > 0)) cout<<"1"<<endl;
            else cout<<"2"<<endl;
        }
    }
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
