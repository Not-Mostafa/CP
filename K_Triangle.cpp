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

bool calc(ll x1, ll y1 , ll x2, ll y2,ll x3,ll y3)
{
    ll side[3];
    side[0] = ((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    side[1] = ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    side[2] = ((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    sort(side,side+3);
    return (side[0] + side[1] == side[2]);
}
bool check2(ll x1, ll y1 , ll x2, ll y2,ll x3,ll y3){
    if(x1==x2 && y1==y2) return true;
    if(x1==x3 && y1==y3) return true;
    if(x3==x2 && y3==y2) return true;
    return false;
}

void solve()
{
    ll x1,y1,x2,y2,x3,y3; cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(calc(x1,y1,x2,y2,x3,y3)) {
        cout<<"RIGHT"; 
        return;
    }
    ll dx[] = {-1, 1, 0, 0};
    ll dy[] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        if (calc(x1 + dx[i], y1 + dy[i], x2, y2, x3, y3) ) {
            if(check2(x1 + dx[i], y1 + dy[i], x2, y2, x3, y3)) continue ;
            cout << "ALMOST";
            return;
        }
        if (calc(x1, y1, x2 + dx[i], y2 + dy[i], x3, y3)) {
           if (check2(x1, y1, x2 + dx[i], y2 + dy[i], x3, y3))  continue ;
            cout << "ALMOST";
            return;
        }
        if (calc(x1, y1, x2, y2, x3 + dx[i], y3 + dy[i])) {
            if (check2(x1, y1, x2, y2, x3 + dx[i], y3 + dy[i])) continue;
            cout << "ALMOST";
            return;
        }
    }

    cout << "NEITHER";
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
