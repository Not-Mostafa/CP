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
    ll n,k; cin>>n>>k;
    map<ll,ll> freq;
    vector<ll> v(n);
    lp(n)
    {
        cin>>v[i];
        freq[v[i]]++;
    }
    ll score = 0;
    lp(n)
    {
        ll a = v[i];
        ll b = k - a;
        if (freq[a] > 0 && freq[b] > 0) 
        {
            if (a == b && freq[a] >= 2) {
                // Special case: both numbers are the same
                freq[a] -= 2;
                score++;
            } 
            else if (a != b) 
            {
                // General case: a + b == k and a != b                    
                freq[a]--;
                freq[b]--;
                score++;
            }
        }
    }
    cout<<score<<endl;
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
