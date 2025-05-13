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

bool isPrime(ll x)
{
    if( x == 2 || x == 3) return 1;
    if(x == 1 || x%2 == 0 ) return 0;
    for(int i = 3 ; i*i < x ; i+=2)
    {
        if(x%i == 0) return 0;
    }
    return 1;
}

ll primeCount(vector<ll> v)
{
    ll re = 0;
    lp(v.size())
    {
        if(isPrime(v[i])) re++;
    }
    return re;
}

ll maxDivisoirs(vector<ll> v)
{
    ll mx = 0 , re = 0;
    lp(v.size())
    {
        ll temp = 0;
        for(int j =  0 ; j <  v.size() ; j++)
        {
            if(v[i]%v[j] == 0) temp++;
        }
        if(temp >= mx) 
        {
            mx = temp;
            re = v[i];
        }
    }
    return re;
}

bool isPlaindrome(string k)
{
    string h = k;
    reverse(all(h));
    return h == k;
}

ll palindromeCount(vector<ll> v)
{
    ll re = 0;
    lp(v.size())
    {
        string temp = to_string(v[i]);
        if(isPlaindrome(temp)) re++;
    }
    return re;
}

void solve()
{
    int n;cin>>n;
    vector<ll> v(n);
    ai(v)
    sort(all(v));
    cout<<"The maximum number : "<<v[n-1]<<endl;
    cout<<"The minimum number : "<<v[0]<<endl;
    cout<<"The number of prime numbers : "<<primeCount(v)<<endl;
    cout<<"The number of palindrome numbers : "<<palindromeCount(v)<<endl;
    cout<<"The number that has the maximum number of divisors : "<<maxDivisoirs(v)<<endl;


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
