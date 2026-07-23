//File name:Smallest Element >= X
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Binary Search(G)
//Description:Binary Search
//Last Changed:23-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,q; cin>>n>>q;

    vector<ll>a(n);
    for (int i = 0; i < n; i++)cin>>a[i];

    sort(a.begin(),a.end());

    ll x=0,y=0;
    while (q--)
    {
        cin>>x;
        
        int low=0,high=n-1,first_occurence=n;

        while (low<=high)
        {
            int mid=low + (high-low)/2;

            if(a[mid]>=x){
                high=mid-1;
                first_occurence=mid;
            } 
            else low=mid+1;
        }
        if(first_occurence==n)cout<<"-1\n";
        else cout<<a[first_occurence]<<"\n";
    }
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}