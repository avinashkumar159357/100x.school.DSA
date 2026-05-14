//File name:Lowercase, Uppercase, Digit or Special
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:String(C)
//Description:getting familiar with string
//Last Changed:14-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    char ch; cin>>ch;
    
    if(ch<='z' && ch>='a')cout<<"Lowercase";
    else if(ch<='Z' && ch>='A')cout<<"Uppercase";
    else if(ch<='9' && ch >='0')cout<<"Digit";
    else cout<<"Special";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;  // cin>>t;
    while(t--) {
        solve();
    }

}