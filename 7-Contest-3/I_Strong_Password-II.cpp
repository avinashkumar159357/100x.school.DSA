//File name:Strong Password - II
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:I
//Description:Contest-III
//Last Changed:30-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*void solve(){                 //little longer approach
    string s; cin>>s;
    bool fu=true,fl=true,fd=true,fs=true;
    int count=0;
    for (char c : s)
    {
        if(fu){
            if(isupper(c)){
                count++;
                fu=false;
            }
        }
        if(fl){
            if(islower(c)){
                count++;
                fl=false;
            }
        }
        if(fd){
            if(isdigit(c)){
                count++;
                fd=false;
            }
        }
        if(fs){
            if(!isalnum(c)){
                count++;
                fs=false;
            }
        }   
    }
    if(count==4)cout<<"Strong";
    else if(count==3)cout<<"Moderate";
    else if(count<3) cout<<"Weak";
    
}*/

void solve(){ //much shorter version
    string s; cin>>s;
    bool fu=false,fl=false,fd=false,fs=false;
    for(char c: s){
        if(isupper(c))fu=true;
        if(islower(c))fl=true;
        if(isdigit(c))fd=true;
        if(!isalnum(c))fs=true;
    }
    int count=fu+fl+fd+fs;

    if(count==4)cout<<"Strong";
    else if(count==3)cout<<"Moderate";
    else if(count<3) cout<<"Weak";
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}