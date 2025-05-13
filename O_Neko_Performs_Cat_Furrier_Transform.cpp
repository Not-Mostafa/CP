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
    ll x;cin>>x;
    vll ans;
    if(x&1 == 1)
    {
        ll altr = 1,ct = 0,altr2 = 0;
        for(int i = 30; i > 0;i--) {
            if((x>>i)&1 == altr){
                if()
                ct+=2;
                ans.push_back(i+1);
                swap(altr,altr2);
            }
        }
        cout<<ct<<endl;
        lp(ans.size()) cout<<ans[i]<<" ";
    }
    // ll first;
    // for(int i = 30; i >= 0;i--) {
    //     if(((1<<i) & x) != 0) {
    //         first = i;
    //         break;
    //     }
    // }
    // for(int i = first ; i >= 0 ; i--) {
    //     if(((1<<i) & x) == 0){
            
    //         x^=((1<<i)-1);
    //         x++;
    //     }
    // } // in all cases the plus one will be added normally
    // cout<<ans.size()*2 - (x&1 == 1 ? 0:1)<<endl;
    // lp(ans.size()) cout<<ans[i]<<" ";
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
