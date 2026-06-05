//File name:Sum of All Subarrays (Medium)
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Prefix Sum and Contribution (L)
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
    for (int i = 0; i < n; i++)cin>>a[i];
    
    //sum of sums of all the subarrays
    for (int i = 0; i < n; i++) {
        total_sum+=(i+1)*(n-i)*a[i];
    } 


    // Contribution Technique:
    // For element a[i]:

    // Left boundary can be chosen in (i+1) ways.
    // Right boundary can be chosen in (n-i) ways.

    // Therefore a[i] appears in:
    // (i+1)*(n-i)  subarrays.

    // Contribution of a[i]: a[i] * (i+1) * (n-i)

    // Answer = sum of contributions of all elements.
    
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