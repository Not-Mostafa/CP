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
    int a,b;cin>>a>>b;
    ll ans[2];
    ans[0] = 0;ans[1] = 0;
    lp(2)
    {  
        ll temp = 0; 
        for(int j = 0 ; j < a ; j++)
        {
            string k;cin>>k;
            for(int h = 0 ; h < b ; ++h)
            {
                if(k[h] == '#') temp++;
            }
        }
        ans[i] = temp;
    }
    cout<<((ans[0] == ans[1])? "Yes":"No");
    
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
