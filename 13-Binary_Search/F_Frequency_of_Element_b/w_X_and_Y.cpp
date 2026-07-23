//File name:Frequency of Element b/w X and Y
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Binary Search(F)
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
        cin>>x>>y;
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

        low=0,high=n-1;
        int last_occurence=-1;

        while (low<=high)
        {
            int mid=low + (high-low)/2;

            if(a[mid]<=y){
                low=mid+1;
                last_occurence=mid;
            } 
            else high=mid-1;
        }
        if(x>y) cout<<"0\n";
        else cout<<last_occurence-first_occurence+1<<"\n";
    }
}
// solve the same problem using lower_bound and upper_bound function
// void solve(){
//     int n,q; cin>>n>>q;

//     vector<ll>a(n);
//     for (int i = 0; i < n; i++)cin>>a[i];

//     sort(a.begin(),a.end());

//     ll x=0,y=0;
//     while (q--)
//     {
//         cin>>x>>y;
        
//         auto it1=lower_bound(a.begin(),a.end(),x)-a.begin();
//         auto it2=upper_bound(a.begin(),a.end(),y)-a.begin();

//         if(x>y) cout<<"0\n";
//         else cout<<it2-it1<<"\n";
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