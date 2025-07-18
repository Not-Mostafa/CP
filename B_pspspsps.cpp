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
    int n;cin>>n;
    string k;cin>>k;
    if (k[0] == 's') k[0] = '.';
    if (k.back() == 'p') k.back() = '.';
    vector<ll> s,p; 
    lp(n)
    {
        if(k[i] == 'p')
        {
            p.push_back(1);
        }
        else if(k[i] == 's')
        {
            s.push_back(i+1);
        }
    }
    for(int i = 0 ; i < min(s.size(),p.size()) ; i++)
    {
        if(s[i] != p[i])
        {
            cout<<"NO\n";
            return;
        }
    }
    vector<ll> s1,p1; 
    lp(n)
    {
        if(k[i] == 'p')
        {
            p1.push_back(i+1);
        }
        else if(k[i] == 's')
        {
            s1.push_back(n);
        }
    }
    for(int i = 0 ; i < min(s1.size(),p1.size()) ; i++)
    {
        if(s1[i] != p1[i])
        {
            cout<<"NO\n";
            return;
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
