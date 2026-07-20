//File name:Smallest Subarray with Sum > K
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:sliding window and Two pointer (J)
//Description:sliding window , two pointer
//Last Changed:20-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin>>n;
    ll k; cin>>k;
    vector<ll>a(n);
    bool flag=false;
    for (int i = 0; i < n; i++) cin>>a[i];
    
    int l=0,ans=INT_MAX;
    ll sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        while(sum>k){
            ans=min(ans,i-l+1);
            flag=true;
            sum-=a[l];
            l++;
        }
    }
    if(flag) cout<<ans;
    else cout<<"-1";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}