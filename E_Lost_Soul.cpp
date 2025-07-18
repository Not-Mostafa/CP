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

void solve(){
    ll n;
    cin>>n;
    vll a(n) , b(n);
    ai(a) ai(b)
    vll freq(n,0),freq2(n,0);
    lp(n-1){
        if(i > 0) freq[i] = freq[i-1];
        if(b[i+1] == a[i]){
            freq[i]++;
        }
        else if(a[i+1] == b[i]){
            freq[i]++;
        }
    }
    lp(n-2){
        if(i > 0) freq2[i] = freq2[i-1];
        if(b[i+2] == a[i]){
            freq2[i]++;
        }
        else if(a[i+2] == b[i]){
            freq2[i]++;
        }
    }
    ll mx = 0;
    lp(n-1){
        mx = max(freq[i] + freq2[n-1] - freq2[i],mx);
    }
    cout<<mx<<endl;
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
