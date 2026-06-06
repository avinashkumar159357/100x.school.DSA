//File name:Maximum Subarray Sum of Size K
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Prefix Sum and Contribution (N)
//Description:prefix sum
//Last Changed:6-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ //best solution
    ll n,k; cin>>n>>k;
    vector<ll>a(n);
    ll sum=0,ans=LLONG_MIN;

    //taking the input
    for (int i = 0; i < n; i++)cin>>a[i];
    
    for (int i = 0; i <n; i++)
    {
        if(i<k){
            sum+=a[i];
        }else {
            ans=max(ans,sum);
            sum+=a[i];
            sum-=a[i-k];
        }
    }
    ans=max(ans,sum);
    
    if(k==n)cout<<sum;
    else cout<<ans;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    ll q=1; //  cin>>q;
    while (q--)
    {
        solve();
    }
    
}