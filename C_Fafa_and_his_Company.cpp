#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    int ans = 0,employee_num = n;
    for(int i = 1 ; i < n ; i++)
    {
        employee_num--;
        if(employee_num%i == 0) ans++;
    }
    cout<<ans;
    return 0;
}
