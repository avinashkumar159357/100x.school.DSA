//Problem name:Binary Search
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:(B)
//Description:searching and sorting
//Last Changed:17-05-2026
#include<bits/stdc++.h>
using namespace std;

int Binary_search(vector<long long>  &a ,long long key){
    int low=0,high=a.size()-1;
    
    while (low<=high)
    {
        int mid=low+(high-low)/2;

        if(a[mid]==key)return true;
        if(a[mid]<key) low=mid+1;
        else high=mid-1;
    }
    return false;
}
void solve(){
    int n; cin>>n;
    vector<long long>a(n);
    for (int i = 0; i <n; i++) cin>>a[i];
    long long key; cin>>key;
    bool flag=Binary_search(a,key);

    if(flag) cout<<"YES";
    else cout<<"NO";
    
}
int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int TC=1;// cin>>TC;
    while (TC--)
    {
        solve();
    }
      
}

