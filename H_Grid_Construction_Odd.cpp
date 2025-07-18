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
    ll n; cin>>n;
    ll arr[n][n];
    lp(n)
    {
        for(int j = 0 ; j < n; j++)
            arr[i][j] = 0;
    }  
    lp(n)
        arr[i][n-i-1] = n/2+1;
        
    ll cycle[n];
    lp(n) cycle[i] = 0;
    cycle[n-1] = n/2+1;
    int ind = 0;
    for(int i = 0 ; i < n; i++)
    {
        if(i+1 != n/2+1) 
            {
                cycle[ind] = i+1;
            ind++;    
            }
    }    
    lp(n)
    {
        int cyclestart = i;
        for(int j = 0 ; j < n ; j++)
        {
            arr[i][j] = cycle[cyclestart];
            cyclestart++;
            if(cyclestart == n)
            cyclestart = 0;
        }
    }
    lp(n)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
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
