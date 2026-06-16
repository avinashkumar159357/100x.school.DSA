//File name:Count Number of Distinct Integers
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Sliding window and Two pointer (C)
//Description:sliding window technique used here
//Last Changed:16-06-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,k; cin>>n>>k;
    vector<ll>a(n);
    for (int i = 0; i < n; i++) cin>>a[i];

    unordered_map<ll,int>mp;
    for (int i = 0; i < n; i++)
    {
        if(i<k) mp[a[i]]++;
        else{
            cout<<mp.size()<<" ";
            mp[a[i]]++;
            mp[a[i-k]]--;
            if(mp[a[i-k]]==0)mp.erase(a[i-k]);
        }
    }
    cout<<mp.size();
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int TC=1; // cin>>TC;
    while(TC--) {solve();}
}    

    