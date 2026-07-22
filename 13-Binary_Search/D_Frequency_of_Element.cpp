//File name:Frequency of Element
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Binary Search(D)
//Description:Binary Search
//Last Changed:22-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,q; cin>>n>>q;
    
    vector<ll>a(n);
    for (int i = 0; i < n; i++) cin>>a[i];

    sort(a.begin(),a.end());

    ll x=0;
    while (q--)
    {
        cin>>x;
        int low=0,high=n-1,first_occurence=0,last_occurence=0;
        bool found =false;
        while (low<=high)
        {
            int mid=low + (high-low)/2;

            if(a[mid]==x){
                high=mid-1;
                found=true;
                first_occurence=mid+1;
            } 
            else if(a[mid]<x) low=mid+1;
            else high=mid-1;
        }

        low=0,high=n-1;
        while (low<=high)
        {
            int mid=low + (high-low)/2;

            if(a[mid]==x){
                low=mid+1;
                last_occurence=mid+1;
            } 
            else if(a[mid]<x) low=mid+1;
            else high=mid-1;
        }

        if(found) cout<<last_occurence-first_occurence+1<<"\n";
        else cout<<"0\n";   
    }
    
}
// another way is to directly use a map to get the frequency of the element 
// when there are multiple queries
// void solve(){
//     int n,q; cin>>n>>q;
//     unordered_map<ll,int>mp;
//     vector<ll>a(n);
//     for (int i = 0; i < n; i++){
//         cin>>a[i];
//         mp[a[i]]++;
//     } 

//     ll x=0;
//     while (q--)
//     {
//         cin>>x;
//         cout<<mp[x]<<"\n";
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