//File name:Crazy Rectangle
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:G
//Description:Contest-III
//Last Changed:30-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n,m; cin>>n>>m;
    int num=1;
    char ch='a';
    bool flag =true;
    for (int  i = 0; i < n; i++)
    {
        for (int  i = 0; i < m; i++)
        {
            if(flag){
                cout<<num;
                if(num==9)num=0;
                num++;
                flag=false;
            }
            else {
                cout<<ch;
                if(ch=='z')ch='`';
                ch++;
                flag=true;
            }            
            
        }
        cout<<"\n";
    }
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}