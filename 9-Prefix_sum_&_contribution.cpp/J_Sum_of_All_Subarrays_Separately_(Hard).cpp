//File name:Sum of All Subarrays Separately (Hard)
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Prefix Sum and Contribution (J)
//Description:prefix sum
//Last Changed:5-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ //best solution
    ll n; cin>>n;
    vector<ll>a(n);

    //taking the input
    for (int i = 0; i < n; i++){
        cin>>a[i];
    } 
    
    // printing the sum of all the subarrays separately without using 
    // third loop since the value of n is large
    for (int i = 0; i < n; i++) {
        long long sum = 0;

        for (int j = i; j < n; j++) {
            sum += a[j];
            cout << sum << '\n';
        }
    }   
}
// another solution i have implemented using prefix sum 
// void solve(){ 
//     ll n; cin>>n;
//     vector<ll>a(n),pref(n);

//     //taking the input
//     for (int i = 0; i < n; i++)cin>>a[i];
        
//     pref[0]=a[0];
//     for (int i = 1; i < n; i++) pref[i]=pref[i-1]+a[i];

//     for (int  i = 0; i < n; i++)cout<<pref[i]<<"\n";
    
//     for (int i = 0; i < n; i++) {
//         for (int j = i+1; j < n; j++) {
//             cout <<pref[j]-pref[i]<< '\n';
//         }
//     }   
// }
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    ll q=1; //  cin>>q;
    while (q--)
    {
        solve();
    }
    
}