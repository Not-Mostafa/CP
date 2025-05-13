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
    ll n;cin>>n;
    string k;cin>>k;
    string h;cin>>h;
    for(int i = 0 ; i < n ; i++)
    {
        if(k[i] != h[i])
        {
            if(i+1 < n && k[i] == 'a' && h[i] == 'b' )
            {
                int ptr = i+1;
                while(ptr+1 < n && k[ptr] == 'a')
                {
                    ptr++;
                }
                if(ptr < n && k[ptr] == 'b')
                {
                    k[ptr] = 'a';
                    k[i] = 'b';
                }
                else
                {
                    cout<<"NO\n";
                    return;
                }
            }
            else if(i+1 < n && k[i] == 'b' && h[i] == 'c' )
            {
                int ptr = i+1;
                while(ptr+1 < n && k[ptr] == 'b')
                {
                    ptr++;
                }
                if(ptr < n && k[ptr] == 'c')
                {
                    k[ptr] = 'b';
                    k[i] = 'c';
                }
                else
                {
                    cout<<"NO\n";
                    return;
                }
            }
            else
            {
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
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
