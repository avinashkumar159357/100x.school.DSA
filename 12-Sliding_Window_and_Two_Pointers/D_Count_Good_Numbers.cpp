//File name:Count Good Numbers
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Sliding window and Two pointer (D)
//Description:sliding window technique used here
//Last Changed:16-06-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,m,k; cin>>n>>m>>k;
    vector<ll>a(n),b(m);
    unordered_set<ll>st;
    for (int i = 0; i < n; i++) cin>>a[i];
    for (int i = 0; i < m; i++){
        cin>>b[i];
        st.insert(b[i]);
    } 

    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(i<k){
            if(st.find(a[i])!=st.end())cnt++;
        }
        else{
            cout<<cnt<<" ";
            if(st.find(a[i])!=st.end())cnt++;
            if(st.find(a[i-k])!=st.end())cnt--;
        }
    }
    cout<<cnt;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int TC=1; // cin>>TC;
    while(TC--) {solve();}
}    

    