//File name:Count Words
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:String(N)
//Description:getting familiar with string
//Last Changed:14-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s; getline(cin,s);
    int count =1;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==' ') count++;
    }
    cout<<count;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;  // cin>>t;
    while(t--) {
        solve();
    }

}