//File name:Insertion Sort Trace
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:sorting and searching (F)
//Description:getting familiar with the searching method 
//Last Changed:27-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int >a(n);

    for (int i = 0; i < n; i++) cin>>a[i];
    int ind=0,count=0;
    for (int i = 1; i < n; i++)
    {   
        int temp=a[i],j ;
        ind=i;
        for (j = i-1; j >=0; j--)
        {
            if(temp<a[j]){
                a[j+1]=a[j];
                count++;
            }else break;
        }
        a[j+1]=temp;

        cout<<"Pass "<<i<<": ";
        for (auto x : a) cout<<x<<" ";
        cout<<", ";

        for(int i=0; i<n; i++) {
            if(i==(ind+1)) cout<<"| ";
            cout<<a[i]<<" ";
        }
        if(ind==n-1) cout<<"| ";
        cout<<", shifts = "<<count;

        cout<<"\n";
        count=0;
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