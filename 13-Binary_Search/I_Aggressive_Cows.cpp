//File name:Aggressive Cows
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Binary Search(I)
//Description:Binary Search
//Last Changed:24-07-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool placed(vector<ll>& a,ll k ,ll dist){
    ll cnt=1,first_placed=a[0];
    for (int i = 1; i < a.size(); i++)
    {
        ll last_placed=a[i];
        if((last_placed-first_placed)>=dist){
            cnt++;
            first_placed=last_placed;
        } 
        if(cnt==k)return true;
    }
    return false;
}

void solve(){
    ll n,k; cin>>n>>k;

    vector<ll>a(n);
    for (int i = 0; i < n; i++)cin>>a[i];

    sort(a.begin(),a.end());

    ll low=1,high=a[n-1]-a[0],ans=0;

    while (low<=high)
        {
        ll mid=low + (high-low)/2;

        if(placed(a,k,mid)){
            low=mid+1;
            ans=mid;
        } 
        else high=mid-1;
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