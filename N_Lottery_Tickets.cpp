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
    ll ans = 1 , n; cin>>n;
    deque<ll> d(n);
    ai(d)
    ll ours = d[0] , after = -1 , prev = -1;
    sort(all(d));
    lp(n)
    {
        if(ours == d[i])
        {
            if(i > 0)
            {
                ans+=abs(d[i-1]-ours)/2;
            }
            else
            {
                ans+=ours-1;
            }
            if(i+1 < n)
            {
                ans+=abs(d[i+1]-ours)/2;
            }
            else
            {
                ans+=1000000-ours;
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
