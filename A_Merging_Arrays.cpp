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
    ll n,m;cin>>n>>m;
    vll a(n),b(m);ai(a)ai(b)
    ll ptr1 = 0 , ptr2 = 0;
    while(ptr1 != n && ptr2 != m)
    {
        if(a[ptr1] < b[ptr2]) {
            cout<<a[ptr1]<<" ";
            ptr1++;
        }
        else {
            cout<<b[ptr2]<<" ";
            ptr2++;
        }
    }
    while(ptr1 != n) 
    {
        cout<<a[ptr1]<<" ";
        ptr1++;
    }while(ptr2 != m) 
    {
        cout<<b[ptr2]<<" ";
        ptr2++;
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
