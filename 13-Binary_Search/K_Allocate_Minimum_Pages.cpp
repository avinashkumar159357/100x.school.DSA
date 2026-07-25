//File name:Allocate Minimum Pages
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Binary Search(K)
//Description:Binary Search
//Last Changed:25-07-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool max_pages(vector<ll>& a,ll k ,ll page_limit){
    ll curr_sum=0,students=1;
    for (int i =0; i<a.size(); i++)
    {
        
        if((curr_sum+a[i])<=page_limit){
            curr_sum+=a[i];
        }else {
            students++;
            curr_sum=a[i];
        }
    }
    return (students<=k);
}

void solve(){
    ll n,k; cin>>n>>k;
    ll sum=0;

    vector<ll>a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
        sum+=a[i];
    }

    // if the number of books is greater than number of students
    if(n<k){
        cout<<"-1";
        return;
    }

    ll low=*max_element(a.begin(),a.end()),high=sum,ans=-1;

    while (low<=high)
        {
        ll mid=low + (high-low)/2;

        if(max_pages(a,k,mid)){
            high=mid-1;
            ans=mid;
        } 
        else low=mid+1;
    }
    cout<<ans;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}