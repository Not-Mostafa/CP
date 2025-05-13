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
    int a;
    cin>>a;
    vector<ll> arr(a),sorted(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
        sorted[i] = arr[i];
    }
    sort(all(sorted));
    ll count = 0;
    lp(a)
    {
        if(arr[i] != sorted[i])
        {
            count++;
        }
    }
    cout<<((count > 2)? "NO":"YES");

    // for(int i=0;i<a-1;i++){
    //     if(arr[i]>arr[i+1]){
    //         count++;
    //         if(count == 1)
    //         {
    //             indx1 = i;
    //         }
    //         else if(count == 2) indx2 = i;
    //     }
    //     if(count == 3)
    //     {
    //         break;
    //         cout<<"NO";
    //         return; 
    //     }
    // }
    // if(count == 2)
    // {
    //     swap(arr[indx1],arr[indx2]);

    // }
    // else if(count == 1)
    // {
    //     cout<<"YES";
    //     return;
    // }
    // bool flag = false;
    // for(int i=0;i<a-1;i++){
    //     if(arr[i]>arr[i+1]){
    //         flag = true;
    //         break;
    //     }
    // }

    // if(!flag){
    //     cout<<"YES";
    // }
    // else{
    //     cout<<"NO";
    // }
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
