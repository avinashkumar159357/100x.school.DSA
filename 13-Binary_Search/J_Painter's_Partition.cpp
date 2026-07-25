//File name:Painter's Partition
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Binary Search(J)
//Description:Binary Search
//Last Changed:25-07-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool max_partition(vector<ll>& a,ll k ,ll length){
    ll curr_sum=0,painters=1;
    for (int i =0; i<a.size(); i++)
    {
        
        if((curr_sum+a[i])<=length){
            curr_sum+=a[i];
        }else {
            painters++;
            curr_sum=a[i];
        }
    }
    if(painters<=k)return true;
    else return false;
}

void solve(){
    ll n,k; cin>>n>>k;
    ll sum=0;
    vector<ll>a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
        sum+=a[i];
    }

    ll low=*max_element(a.begin(),a.end()),high=sum,ans=0;

    while (low<=high)
        {
        ll mid=low + (high-low)/2;

        if(max_partition(a,k,mid)){
            high=mid-1;
            ans=mid;
        } 
        else low=mid+1;
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