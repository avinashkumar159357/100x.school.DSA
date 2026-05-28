//File name:Selection Sort v/s Insertion Sort
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:sorting and searching (G)
//Description:getting familiar with the searching method 
//Last Changed:28-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n; cin>>n;
    vector<ll>a(n);
    

    for (int i = 0; i < n; i++) cin>>a[i];

    vector<ll>b=a;
    int shift=0;
    for (int i = 1; i < n; i++)
    {   
        ll temp=a[i] ;
        int j;
        for (j = i-1; j >=0; j--)
        {
            if(temp<a[j]){
                a[j+1]=a[j];
                shift++;
            }else break;
        }
        a[j+1]=temp;
    }
    //=====================================
    int count=0;
    for (int i = 0; i < n-1; i++)
    {
        int min_ind=i;  
        for (int j = i+1; j < n; j++)
        {
            if(b[j]<b[min_ind]){
                min_ind=j;              }
        }
        
       if(b[i]!=b[min_ind]){
            swap(b[i],b[min_ind]); 
            count++;
       }
    }

    if(count==shift) cout<<"Tie\n";
    else if(count>shift) cout<<"Insertion Sort\n";
    else cout<<"Selection Sort\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) {
        solve();
    }

}