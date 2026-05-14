//File name: Lexicographical Order
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:String(F)
//Description:getting familiar with string
//Last Changed:14-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    string a,b; cin>>a>>b;
    
    if(a==b)cout<<"Equal";
    else if(a<b)cout<<"A";
    else cout<<"B";
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;  // cin>>t;
    while(t--) {
        solve();
    }

}