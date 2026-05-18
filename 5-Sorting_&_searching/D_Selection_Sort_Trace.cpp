//File name:Binary Search (Strings)
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:sorting and searching (D)
//Description:getting familiar with the searching method 
//Last Changed:18-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int >a(n);

    for (int i = 0; i < n; i++) cin>>a[i];
    
    for (int i = 0; i < n-1; i++)
    {
        int min_ind=i;  //chose the first element of unsorted array 
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<a[min_ind]){
                min_ind=j;  //got the index of minimum element of unsorted array
            }
        }
        int min_selected=a[min_ind];

        swap(a[i],a[min_ind]); //swapped the minimum with the first element

        cout<<"Pass "<<i+1<<": ";
        for (auto x : a) cout<<x<<" ";
        cout<<", ";
        cout<<"min_selected = "<<min_selected;

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