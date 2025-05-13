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
    map<char,ll> m;
    lp(k.size())
    {
        m[k[i]]++;
    }
    if(n%4 != 0 || m['A'] > n/4 ||  m['G'] > n/4 || m['C']  > n/4 || m['T']  > n/4 )
    {
        cout<<"==="<<endl;
        return ;
    }
    m['A'] = (n/4)-m['A'];
    m['C'] = (n/4)-m['C'];
    m['T'] = (n/4)-m['T'];
    m['G'] = (n/4)-m['G'];
    lp(k.size())
    {
        if(k[i] == '?')
        {
            if(m['A'] > 0)
            {
                m['A']--;
                k[i] = 'A';
            }
            else if(m['C'] > 0)
            {
                m['C']--;
                k[i] = 'C';
            }
            else if(m['G'] > 0)
            {
                m['G']--;
                k[i] = 'G';
            }
            else if(m['T'] > 0)
            {
                m['T']--;
                k[i] = 'T';
            }
        } 
    }
    cout<<k;
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
