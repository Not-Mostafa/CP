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
    string n;cin>>n;
    ll sz = n.size();
    ll sum = 0 , ans = 0, ones = 0 ,twos = 0;
    lp(sz) {
        sum+=(n[i]-'0');
        if((n[i]-'0' )% 3 == 1) ones++;
        else if((n[i]-'0' )% 3 == 2) twos++;
    }

    if(sum%3 == 1){        
        if(sz > 1  && ones) ans++;
        else if(sz > 2 && twos > 1) ans+=2;
        else{
            cout<<-1;
            return;
        }
    }
    else if(sum%3 == 2) {
        if(sz > 1  && twos) ans++;
        else if(sz > 2 && ones > 1) ans+=2;
        else{
            cout<<-1;
            return;
        }
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
