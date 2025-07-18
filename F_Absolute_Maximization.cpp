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

void countf(vll v, vll &freq)
{
    lp(v.size())
    {
        for(int j = 0; j < freq.size() ; j++)
        {
            if((v[i]&(1<<j)) == (1<<j)) freq[freq.size()-1-j]++;
        }
    }    
    //lp(freq.size()) cout<<freq[i];

}

void solve()
{
    ll n;cin>>n;
    vll v(n);ai(v)
    ll min = 1023 , max = 0;
    vll freq(10,0) ;
    countf(v,freq);
    lp(10)
    {
        if(freq[i] < n) min-=(1<<(9-i)); // if we have zeros
        if(freq[i] > 0) max+=(1<<(9-i)); // if we have ones
    }
    cout<<max-min<<endl;
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
