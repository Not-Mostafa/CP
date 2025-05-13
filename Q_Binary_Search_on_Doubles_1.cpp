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
    ld x;
    cin>>x;
    ld high = x,low = 0;
    if(x >  3 || x == 0)
    while(high >= low) // x = smth + mid = smth * mid , smth = x - mid
    {
        ld mid = (high+low)/2;
        //cout<<fixed<<setprecision(9)<<mid<<endl;
        ld smth = x-mid;
        if(abs(x - smth * mid) <=  1e-9)
        {
            cout<<fixed<<setprecision(9)<<"Y "<<smth<<" "<<mid<<endl;
            return ;
        }
        else if(smth*mid > x)
        {
            high = mid;
        } 
        else
        {
            low = mid;
        }
    }
    else
    cout<<"N\n";
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
