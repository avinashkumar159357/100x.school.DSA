//File name:count quadreplets
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: Array(Q)
//Description:Array 
//Last Changed:29-4-2026
#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n,x,c=0; cin>>n;
    cin>>x;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    for (int  i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for(int k=j+1; k<n; k++){
                
                for (int  l = k+1; l < n; l++)
                {
                    long long value=a[i]-(2*a[j])+(3*a[k])-(4*a[l]);
                    if(value==x) c++;
                }
            }    
        }
    }
    cout<<c;
    cout<<"\n";

}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}