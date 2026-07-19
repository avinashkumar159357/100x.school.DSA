//File name:Longest Substring Without Repeating Characters
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Sliding window and Two pointer (F)
//Description:sliding window technique used here
//Last Changed:18-06-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//it is better to solve this problem with frequency map
void solve(){
    int n; cin>>n;
    unordered_map<char,int>mp;

    string s; cin>>s;

    int l=0,ans=0;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;

        while (mp[s[i]]>1)
        {
            mp[s[l]]--;
            l++;
        }
        ans=max(ans,i-l+1);
    }
    cout<<ans;
}

// void solve(){
//     int n; cin>>n;
//     string s; cin>>s;
//     unordered_set<char>st;
    
//     int l=0,ans=0;
//     for (int i = 0; i < n; i++)
//     {
//         while (st.count(s[i]))
//         {   
//             st.erase(s[l]);
//             l++;
//         }
//         st.insert(s[i]);
//         ans=max(ans,i-l+1);
//     }
//     cout<<ans;
// }
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int TC=1; // cin>>TC;
    while(TC--) {solve();}
}    

    