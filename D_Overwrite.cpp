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
    ll n,x;cin>>n>>x;
    vector<ll> a(n),b(x);
    ai(a) ai(b)
    ll cycleStart = min_element(all(b))-b.begin();
    vector<ll> c(x);
    lp(x)
    {
        c[i] = b[cycleStart];
        cycleStart++;
        if(cycleStart == x) cycleStart = 0;
    }
    ll j = 0,used = 1;
    stack<ll> s;
    bool started = false;
    if(x != 1)
    {
        lp(n-x)
        {
            if(a[i] > c[j]) // reminder not equal
            {
                started = true;
                a[i] = c[j];
                while(i != n)
                {

                    if(n-i != x-j-1)
                    {
                        a[i] = c[j];
                    }
                    else
                    {
                        j++;
                        a[i] = c[j];
                    }
                    i++;
                }
                break;
            }
        }
        if(!started)
        {
            ll i = n-x;
            while(i != n && a[i] == c[j])
            {
                j++;
                i++;
            }
            if(i != n)
            {
                if(a[i] > c[j])
                {
                    for(ll k = i ; k < n ; k++)
                    {
                        a[k] = c[j];
                        j++;
                    }
                }
            }
        }
    }
    else
    {
        lp(n)
            if(a[i] > c[j]) a[i] = c[j];
    }
    lp(n)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
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
