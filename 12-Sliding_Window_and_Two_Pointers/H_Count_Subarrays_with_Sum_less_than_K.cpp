//File name:Count Subarrays with Sum < K
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:sliding window and Two pointer (H)
//Description:sliding window ,two pointer
//Last Changed:19-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin>>n;
    ll k; cin>>k;
    vector<ll>a(n);
 
    for (int i = 0; i < n; i++) cin>>a[i];
    
    ll l=0,ans=0;
    ll sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        while (sum>=k)
        {   
            sum-=a[l];
            l++;
        }
        ans+=(i-l+1);
    }
    cout<<ans;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}