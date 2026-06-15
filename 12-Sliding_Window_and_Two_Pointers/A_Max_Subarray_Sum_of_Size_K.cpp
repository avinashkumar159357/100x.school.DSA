//File name:  Max Subarray Sum of Size K
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Sliding window and Two pointer (A)
//Description:sliding window technique used
//Last Changed:15-06-2026

#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n,k; cin>>n>>k;
    vector<ll>a(n);

    for (int i = 0; i < n; i++) cin>>a[i];
    ll sum=0,ans=LLONG_MIN;
    
    for (int i = 0; i < n; i++)
    {
        if(i<k) sum+=a[i];
        else {
            ans=max(ans,sum);
            sum+=a[i];
            sum-=a[i-k];
        }
    }
    ans=max(ans,sum);
    cout<<ans;
}
int main() {
    fastio;
    int TC=1; // cin>>TC;
    while(TC--) {solve();}
}    

    