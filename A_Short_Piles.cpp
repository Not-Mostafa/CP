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
    ll a,b,c;
    cin>>a>>b>>c;
    ll cnt = (a+2*b+c*3)/2;
    ll bob = cnt;
    if(a > cnt) cnt = 0,a-=cnt;
    else a = 0,cnt-=a;
    if(b*2 > cnt && cnt%2 == 0) cnt = 0,b-=cnt/2;
    else if(b*2 > cnt){
        a++;
        cnt = 0,b-=cnt/2;
    }
    else b = 0,cnt-=b/2;
    if(c*3 > cnt && cnt%3 == 0) cnt = 0,c-=cnt/3;
    else if(c*3 > cnt && cnt%3 == 1) a+=1,cnt = 0,c-=cnt/3;
    else if(c*3 > cnt) b+=1,cnt = 0,c-=cnt/3;
    else c = 0,cnt-=c/3;


    if(c == 1){
        if(a >= 2){
            a-=2;
        }
        else if(b >= 1){
            b-=1;
        }
        else {
            cout<<"Bob"<<endl;
            return;
        }
    }
    if(b == 1){
        if(a >= 1){
            a-=1;
        }
        else if(c > 2){
            c--;
        }
        else {
            cout<<"Bob"<<endl;
            return;
        }
    }
    cout<<"Alice"<<endl;
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
