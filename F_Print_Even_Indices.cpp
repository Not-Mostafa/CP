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

vector<int> rec(int a[], int n) {
    if (n == -1) 
        return {};
    vector<int> result = rec(a, n - 1); 
    if (n % 2 == 0) 
        result.push_back(a[n]); 
    return result;
}


void solve()
{
    int n;cin>>n;
    int a[n];
    ai(a)
    vector<int> ans = rec(a,n-1);
    rlp(ans.size())
    {
        cout<<ans[i]<<" ";
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
