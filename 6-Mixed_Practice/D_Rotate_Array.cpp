//File name:Rotate Array
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Mixed_Practice (D)
//Description:Practice
//Last Changed:29-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void reverse_the_range(vector<ll>&a,int i,int j){
    while (i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
void solve() {
    int n; cin>>n;
    vector<ll>a(n);
    
    for (int  i = 0; i < n; i++)cin>>a[i];

    int D; cin>>D;

    reverse_the_range(a,0,n-1);
    reverse_the_range(a,0,n-D-1);
    reverse_the_range(a,n-D,n-1);

    for (auto x :a) cout<<x<<" ";
    cout<<"\n";
    
}

/*
using direct STL function
void solve(){  
    int n; cin>>n;
    vector<ll>a(n);
    
    for (int  i = 0; i < n; i++)cin>>a[i];

    int D; cin>>D;
    //using STL function reverse
    reverse(a.begin(),a.end());
    reverse(a.begin(),a.begin()+(n-D));
    reverse(a.begin()+(n-D),a.end());

    for (auto x :a) cout<<x<<" ";
    cout<<"\n";
}
*/
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) {
        solve();
    }

}