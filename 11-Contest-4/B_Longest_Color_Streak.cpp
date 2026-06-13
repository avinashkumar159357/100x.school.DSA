//Problem name:Longest Color Streak
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:Contest 4 (B)
//Description:
//Last Changed:13-06-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n; cin>>n;
    vector<ll>a(n);

    for (int i = 0; i < n; i++)cin>>a[i];
    int cnt=1,ans=0;
    for (int i = 1; i < n; i++)
    {
        if(a[i]==a[i-1])cnt++;
        else if(a[i]!=a[i-1]){
            ans=max(ans,cnt);
            cnt=1;
        }
    }
    ans=max(ans,cnt);
    cout<<ans;
}

int main() {
    fastio;
    int TC=1; // cin>>TC;
    while(TC--) {
        solve();
    }

}    

    