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
    ll  h,w,k;
    cin>>h>>w>>k;
    vector<string> grid(h);
    ai(grid)
    ll ans = 0;
    lp(1<<(h+w)){
        ll have = 0;
        for(int row = 0 ; row < h ; row++){
            for(int col = 0 ; col < w ; col++){
                if( !(1<<row & i) && !(1<<(col+h) &i) && grid[row][col] == '#') have++;
            }
        }
        if(have == k) ans++;
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
