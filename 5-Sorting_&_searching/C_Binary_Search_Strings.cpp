//File name:Binary Search (Strings)
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:sorting and searching (C)
//Description:getting familiar with the searching method 
//Last Changed:18-05-2026
#include<bits/stdc++.h>
using namespace std;


bool Binary_search(vector<string> &v ,string s1){
    int low=0, high=v.size()-1;

    while (low<=high)
    {
        int mid=low +(high-low)/2;

        if(v[mid]==s1)return true;
        else if(v[mid]<s1) low=mid+1;
        else high=mid-1;
    }
    return false;
}
void solve() {
    int n; cin>>n;
    vector<string>v;
    string s;

    for (int i = 0; i < n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    string s1; cin>>s1;

    bool flag=Binary_search(v,s1);

    if(flag) cout<<"YES";
    else cout<<"NO";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}