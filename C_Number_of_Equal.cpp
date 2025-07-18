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
    ll a,b,ans = 0;
    cin>>a>>b;
    vector<ll> v1(a),v2(b);
    for(auto& i : v1) cin>>i;
    for(auto& i : v2) cin>>i;
    ll ptr = 0;
    for (int i = 0; i < b; i++)
    {
        ll temp = 0;
        ll temp1 = 1;
        while(ptr < a && v2[i] > v1[ptr])
            ptr++;
        while(ptr < a && v1[ptr] == v2[i])
        {
            temp++;
            ptr++;
        }
        while(i+1 < b && v2[i] == v2[i+1])
        {   
            i++;
            temp1++;
        }
        ans+=temp1*temp;
    }

    cout<<ans;
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
