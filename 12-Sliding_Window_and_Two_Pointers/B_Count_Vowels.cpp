//File name:  Count Vowels
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Sliding window and Two pointer (B)
//Description:sliding window technique used here
//Last Changed:15-06-2026

#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n,k; cin>>n>>k;
    string s; cin>>s;
    ll cnt=0;
    unordered_set<char>st={'a','A','e','E','i','I','o','O','u','U'};
    for (int i = 0; i < n; i++)
    {
        if(i<k) {
            if(st.find(s[i])!=st.end())cnt++;
        }
        else {
            cout<<cnt<<" ";
            if(st.find(s[i])!=st.end())cnt++;
            if(st.find(s[i-k])!=st.end())cnt--;
        }
    }
    cout<<cnt;
}
int main() {
    fastio;
    int TC=1; // cin>>TC;
    while(TC--) {solve();}
}    

    