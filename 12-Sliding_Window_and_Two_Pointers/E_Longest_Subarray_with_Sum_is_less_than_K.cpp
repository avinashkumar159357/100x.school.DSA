//File name:Longest Subarray with Sum < K
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Sliding window and Two pointer (E)
//Description:sliding window technique used here
//Last Changed:17-06-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n; cin>>n;
    ll k; cin>>k;
    vector<ll>a(n);

    for (int i = 0; i < n; i++) cin>>a[i];
    
    int l=0,ans=0;
    ll sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        while (sum>=k)
        {   
            sum-=a[l];
            l++;
        }
        ans=max(ans,i-l+1);
    }
    cout<<ans;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int TC=1; // cin>>TC;
    while(TC--) {solve();}
}    

    