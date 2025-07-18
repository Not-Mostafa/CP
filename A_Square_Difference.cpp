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
    ll a,b;
    cin>>a>>b;
    bool isprime = true;
    if(a-b != 1) isprime = false;
    else if(a+b == 1) isprime = false;
    else if(a+b == 2|| a+b == 3) isprime = true;
    else if((a+b)%2 == 0) isprime = false;
    else {
        for(ll i = 3; i*i <= (a+b) ; i+=2) {//sqrt(a-b) O(4e6)
            if((a+b)%i == 0){
                isprime = false;
                break;
            }
        }
    }
    if(isprime){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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
