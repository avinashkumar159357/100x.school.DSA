//File name:Bubble Sort Trace
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:sorting and searching (E)
//Description:getting familiar with the searching method 
//Last Changed:19-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int >a(n);

    for (int i = 0; i < n; i++) cin>>a[i];
    
    for (int i = 0; i < n-1; i++)
    {
        int count=0;
        
        for (int j = 1; j < n; j++)
        {
            if(a[j-1]>a[j]){
                swap(a[j-1],a[j]);
                count++;
            }
        }

        cout<<"Pass "<<i+1<<": ";
        for (auto x : a) cout<<x<<" ";
        cout<<", ";
        cout<<"swaps = "<<count;

        cout<<"\n";

        if(count==0) break;
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