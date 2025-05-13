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
    double  a,b;
    cin>>b>>a;
    if(a == 0 && b == 0) cout<<"Origem";
    else if(a==0) cout<<"Eixo X";
    else if(b==0) cout<<"Eixo Y";
    else if(a > 0 && b > 0) cout<<"Q1";
    else if(a < 0 && b > 0) cout<<"Q4";
    else if(a > 0 && b < 0) cout<<"Q2";
    else if(a < 0 && b < 0) cout<<"Q3";

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
