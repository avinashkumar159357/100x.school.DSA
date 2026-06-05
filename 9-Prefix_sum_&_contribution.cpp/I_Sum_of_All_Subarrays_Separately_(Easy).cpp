//File name: Sum of All Subarrays Separately (Easy)
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Array technique (I)
//Description:prefix sum
//Last Changed:5-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n; cin>>n;
    vector<ll>a(n);
    
    for (int i = 0; i < n; i++) cin>>a[i];

    ll sum=0;
    //printing the sum of all the sub arrays  separately
    for(int k=0; k<n; k++)
    {
        for (int  i = k; i < n; i++)
        {
            for (int j = k; j <= i; j++)
            {
                sum+=a[j];
            }
            cout<<sum<<"\n";
            sum=0;
        }
    }
    
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