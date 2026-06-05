//File name:Sum of All Subarrays (Easy)
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Prefix Sum and Contribution (K)
//Description:prefix sum
//Last Changed:5-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ //best solution
    ll n; cin>>n;
    vector<ll>a(n);
    ll total_sum=0;
    //taking the input
    for (int i = 0; i < n; i++){
        cin>>a[i];
    } 
    
    //sum of sums of all the subarrays
    for (int i = 0; i < n; i++) {
        ll sum=0;
        for (int j = i; j < n; j++) {
            sum += a[j];
            total_sum+=sum;
        }
    }   
    cout<<total_sum;
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