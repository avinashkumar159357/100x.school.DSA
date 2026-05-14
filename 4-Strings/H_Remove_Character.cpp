//File name:Remove Character
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:String(H)
//Description:getting familiar with string
//Last Changed:14-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin>>s;
    char x; cin>>x;
    /*for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==x){
            s.erase(i,1);
            i--;
        }
    }*/
    s.erase(remove(s.begin(),s.end(),x),s.end());
    cout<<s;

    
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;  // cin>>t;
    while(t--) {
        solve();
    }

}