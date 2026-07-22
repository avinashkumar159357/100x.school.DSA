//File name:Frequency of Element >= X
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Binary Search(E)
//Description:Binary Search
//Last Changed:22-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// this finds the no of elements that are greater than or equal(>=x) to x
// binary implementation of lower bound
void solve(){
    int n,q; cin>>n>>q;

    vector<ll>a(n);
    for (int i = 0; i < n; i++)cin>>a[i];

    sort(a.begin(),a.end());

    ll x=0;
    while (q--)
    {
        cin>>x;
        int low=0,high=n-1,ans=n;

        while (low<=high)
        {
            int mid=low + (high-low)/2;

            if(a[mid]>=x){
                high=mid-1;
                ans=mid;
            } 
            else low=mid+1;
        }
        else cout<<n-ans<<"\n";
    }
}
// this is for no. of elements that are less than or equal (<=x) to x
// binary implementation of upper bound
// void solve(){
//     int n,q; cin>>n>>q;

//     vector<ll>a(n);
//     for (int i = 0; i < n; i++)cin>>a[i];

//     sort(a.begin(),a.end());

//     ll x=0;
//     while (q--)
//     {
//         cin>>x;
//         int low=0,high=n-1,ans=-1;

//         while (low<=high)
//         {
//             int mid=low + (high-low)/2;

//             if(a[mid]<=x){
//                 low=mid+1;
//                 ans=mid;
//             } 
//             else high=mid-1;
//         }
//         else cout<<ans+1<<"\n";
//     }
// }
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}