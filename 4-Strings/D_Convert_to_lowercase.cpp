//File name: Convert to Lowercase
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:String(D)
//Description:getting familiar with string
//Last Changed:14-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    char ch; cin>>ch;
    
    if(ch<='Z' && ch>='A')ch+=32;
    cout<<ch;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;  // cin>>t;
    while(t--) {
        solve();
    }

}