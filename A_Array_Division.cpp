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
    // here we need to search for min sum, so we try all until we find that min
    ll n,k;cin>>n>>k;
    vector<ll> v(n);
    ai(v)
    ll low = *max_element(all(v)) , high = 0 , ans = LLONG_MAX;
    lp(n)
        high+=v[i];
    while(low <= high) 
    {
        ll mid = (low+high)/2; // Mid equals max sum per subarray 
        ll temp = 0, tempAns = 0,num = 1;

        for (auto i : v)
        {
            if (temp + i > mid)
            {
                tempAns = max(tempAns, temp);
                temp = i;
                num++;
            }
            else
            {
                temp += i;
            }
        }
        tempAns = max(tempAns, temp); // Include last subarray
        if (num <= k)  // If we can make k or fewer partitions, if fewer then we increase them by deacresing the max sum
        {
            ans = min(ans, tempAns);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
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
