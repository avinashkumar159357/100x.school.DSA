//File name:Longest Substring Without Repeating Characters
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Sliding window and Two pointer (F)
//Description:sliding window technique used here
//Last Changed:18-06-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    unordered_set<char>st;
    
    int l=0,ans=0;
    for (int i = 0; i < n; i++)
    {
        while (st.count(s[i]))
        {   
            st.erase(s[l]);
            l++;
        }
        st.insert(s[i]);
        ans=max(ans,i-l+1);
    }
    cout<<ans;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int TC=1; // cin>>TC;
    while(TC--) {solve();}
}    

    