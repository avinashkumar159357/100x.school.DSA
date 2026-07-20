//File name:Search Queries
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Binary Search(A)
//Description:Binary Search
//Last Changed:20-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,q; cin>>n>>q;
    
    vector<ll>a(n);
    for (int i = 0; i < n; i++) cin>>a[i];

    ll x=0;
    while (q--)
    {
        cin>>x;
        bool found=false;
        int low=0,high=n-1,ans=0;

        while (low<=high)
        {
            int mid=low + (high-low)/2;

            if(a[mid]==x){
                found=true;
                ans=mid+1;
                break;
            } 
            else if(a[mid]>x) high=mid-1;
            else low=mid+1;
        }

        if(found) cout<<ans<<"\n";
        else cout<<"-1\n";
        
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