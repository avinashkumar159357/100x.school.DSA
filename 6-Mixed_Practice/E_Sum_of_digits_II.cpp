//File name:Sum of Digits - II
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Mixed_Practice (E)
//Description:Practice
//Last Changed:29-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s; cin>>s;
    int sum=0;
    for (int i = 0; i < s.size(); i++)
    {
        sum+=(s[i]-'0');
    }
    cout<<sum;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;//cin>>t;
    while (t--)
    {
        solve();
    }
    
}