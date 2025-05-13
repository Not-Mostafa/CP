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
const int N = 1e6 + 5;
const int M = 1e9 + 7;
const ll OO = 0x3f3f3f3f3f3f3f3f;

vll isprime(N,1),f(N,0);
void pre(){
    for(ll i = 2 ; i < N ; i++){
        f[i] = f[i-1];
        if(isprime[i]){
            f[i]++;
            for(int j = i+i; j < N ; j+=i){
                isprime[j] = 0;
            }
        }
    }
}

void solve() {
    pre();
    ll a,b,k;
    lp(20) cout<<i<<" "<<f[i]<<endl;
    cin>>a>>b>>k;
    for(int j = b ; j >= a; j--) {
        if(f[j] - f[a-1] == k){
            for(int i = j ; i >= a ; i--){
                if(f[i] - f[a-1] != k){
                    cout<<i+2<<endl;
                    break;
                }
            }
            return;
        }
    }   
    cout<<"-1"<<endl;
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
