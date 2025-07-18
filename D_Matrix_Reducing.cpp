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
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    lp(n) for(int j = 0 ; j < m ; j++) cin>>a[i][j];
    ll x,y;
    cin>>x>>y;
    ll b[x][y];
    lp(x) for(int j = 0 ; j < y ; j++) cin>>b[i][j];

    // we need a mask with size n-x + m-y the first n-x bits well be used for the row removal 
    // while the rest will be used for column removal
    for(int mask = 0; mask < 1<<(n+m) ; mask++){
        // first of all check that the number of rows and col is what we want
        ll count_row = 0;
        for(int row = 0 ; row < n ; row++)if((1&(mask>>row))) count_row++;
        ll count_col = 0;
        for(int column = 0 ; column < m ; column++) if((1&(mask>>(column+n)))) count_col++;
        if(count_row != n-x || count_col != m-y) continue;


        vll rows;
        for(int row = 0 ; row < n ; row++){
            if(!(1&(mask>>row))){
                rows.push_back(row);
            }
        }

        vll cols;
        for(int column = 0 ; column < m ; column++){
            if(!(1&(mask>>(column+n)))){
                cols.push_back(column);
            }
        }


        bool flag = false;
        for(int i = 0 ; i < x ; i++){
            for(int j = 0 ; j < y ; j++){
                if(a[rows[i]][cols[j]] != b[i][j]){
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        if(!flag){
            cout<<"Yes"<<endl;
            return ;
        }
    }
    cout<<"No"<<endl;
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
