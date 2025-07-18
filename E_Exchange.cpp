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
    string k;cin>>k;
    vll f(27,0);
    lp(k.size()) f[k[i] - 'a']++;
    bool found = false;
    ll one,two;
    lp(27){
        if(f[i]) for(char chr:k){
            if(chr - 'a' == i){
                break;
            }
            else if(chr - 'a' > i){
                one = chr - 'a';
                two = i;
                found = true;
                break;
            }
        }
        if(found){
            break;
        }
    }
    if(!found){
        cout<<k<<endl;
        return;
    }
    lp(k.size()){
        if(k[i] - 'a' == one) k[i] = char(two+'a');
        else if (k[i] - 'a' == two) k[i] = char(one+'a');
    }
    cout<<k<<endl;
    // char chr;
    // bool found = false;
    // for(int i = 1 ; i < k.size(); i++) {
    //     if(k[i] < k[i-1] && m[k[i]] == 0) {
    //         chr = k[i];
    //         found = true;
    //     }
    //     if(!found) m[k[i]]++;
    //     if(found && k[i] < chr && m[k[i]] == 0){
    //         chr = k[i];
    //     }
    // }
    // if(!found){
    //     cout<<k<<endl;
    //     return ;
    // }
    // char sec;
    // lp(k.size()) {
    //     if(k[i] > chr) {
    //         sec = k[i];
    //         break;
    //     }
    // }
    // lp(k.size()){
    //     if(k[i] == sec) k[i] = chr;
    //     else if(k[i] == chr) k[i] = sec;
    // }
    // cout<<k<<endl;

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
