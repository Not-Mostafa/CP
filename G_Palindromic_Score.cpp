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
    ll a[3];
    ai(a)
    sort(a,a+3);
    ll sum = LONG_LONG_MAX;
    lp(3){
        ll b[2];
        for(int j = 0 ; j < 2 ; j++){
            b[j] = a[(i+j+1)%3];
        }
        if(b[0]%2 == 1 && b[1]%2 == 1){
            sum = min(sum,b[0]+b[1]-1);
        }
        else sum = min(sum,b[0]+b[1]);
    }
    if(sum < 0) sum = 0;
    cout<<sum<<endl;
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
