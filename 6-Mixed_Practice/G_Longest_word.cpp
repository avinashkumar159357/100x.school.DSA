//File name:Longest Word
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Mixed_Practice (G)
//Description:Practice
//Last Changed:29-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*void solve() { //what i did in my first approach
    string s; getline(cin,s);
    vector<int>a;
    int n=s.size();
    for (int i = 0; i < n; i++)
    {
        if(s[i]==' ')a.push_back(i);
    }
    
    a.push_back(n);
    //handles if there is only one word in the string
    if(a.size()==1){
        cout<<n;
        return;
    }
    

    int ans=a[0];//directly handles the length of the first word here
    for (int i = 1; i < a.size(); i++)
    {
        ans=max(ans,(a[i]-a[i-1])-1);
    }
    cout<<ans;
    
}*/
void solve(){ //easiest 
    string s; getline(cin,s);
    int ans=0,cur=0;

    for(char c : s){
        if(c==' '){
            ans=max(ans,cur);
            cur=0;
        }else {
            cur++;
        }
    }
    ans=max(ans,cur);
    cout<<ans;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while (t--)
    {
        solve();
    }
    
}