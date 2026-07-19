//File name:Longest Substring with At Most K Distinct Characters
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:sliding window and Two pointer (G)
//Description:sliding window ,frequency map ,two pointer
//Last Changed:19-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,k; cin>>n>>k;
    unordered_map<char,int>mp;

    string s; cin>>s;

    int l=0,ans=0;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;

        while (mp.size()>k)
        {
            mp[s[l]]--;
            if(mp[s[l]]==0) mp.erase(s[l]);
            l++;
        }
        ans=max(ans,i-l+1);
    }
    cout<<ans;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}