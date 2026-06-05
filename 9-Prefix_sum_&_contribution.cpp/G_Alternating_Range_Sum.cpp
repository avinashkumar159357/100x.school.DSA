//File name: Alternating Range Sum
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Array technique (G)
//Description:prefix sum
//Last Changed:5-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    ll n,q; cin>>n>>q;
    vector<ll>a(n);
    vector<ll>pref(n+1,0);

    ll sum=0;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        if(i%2==0){
            sum+=a[i];
            pref[i+1]=sum;
        }else{
            sum+=-a[i];
            pref[i+1]=sum;
        } 
    } 
    /*
ALTERNATING RANGE SUM

Query:
a[l] - a[l+1] + a[l+2] - a[l+3] + ...

If l is even, flip sign:
if(l % 2 == 0) ans = -ans;

Why?
- b always follows: + - + - + - ...
- Query must start with '+' at position l.
- If l is odd -> signs already match.
- If l is even -> every sign is opposite,
  so multiply the result by -1.

Example:
a = [5, 2, 7, 4, 3]
b = [5,-2, 7,-4, 3]

Query (2,5):
Required = 2 - 7 + 4 - 3 = -4

b-sum = -2 + 7 - 4 + 3 = 4
l is even => answer = -4
*/
    int l,r; 
    while (q--)
    {
        cin>>l>>r;
        ll ans=(pref[r]-pref[l-1]);

        if(l%2==0)ans=-ans;

        cout<<ans<<"\n";
    }
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    ll q=1; //  cin>>q;
    while (q--)
    {
        solve();
    }
    
}