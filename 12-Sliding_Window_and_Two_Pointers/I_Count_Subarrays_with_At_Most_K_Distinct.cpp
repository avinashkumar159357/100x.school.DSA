//File name:Count Subarrays with At Most K Distinct
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:sliding window and Two pointer (I)
//Description:sliding window ,frequency map, two pointer
//Last Changed:19-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,k; cin>>n>>k;
    unordered_map<ll,int>mp;
 
    vector<ll>a(n);
    for (int i = 0; i < n; i++) cin>>a[i];
 
    ll l=0,ans=0;
    for (int i = 0; i < n; i++)
    {   
        mp[a[i]]++;
 
        while (mp.size()>k)
        {
            mp[a[l]]--;
            if(mp[a[l]]==0) mp.erase(a[l]);
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