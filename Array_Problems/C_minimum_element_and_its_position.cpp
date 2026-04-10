#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<long long>a(n);
    for(int i=0; i<n;i++) cin>>a[i];
        
    int min_Value=*min_element(a.begin(),a.end());//min_element is an iterator which iterates over index and with (*), it gives minimum element
    int its_Index=min_element(a.begin(),a.end())-a.begin(); //here index of minimum element - index 0
   
    cout<<min_Value<<" "<<its_Index+1;
}    
/*void solve(){                         // Brute force : This is another approach but this wiil give WA on 100x.school.DSA question 
    int n,min_Value=0,its_Index=0; cin>>n;//  since if there are duplicates of smallest elements in the array 
    vector<long long>a(n);                //it will return the further most duplicate minimum element and its 
    for(int i=0; i<n;i++) cin>>a[i];      // index which is a valid answer
    for (int  i = 0; i < n; i++)
    {
        if(i!=(n-1)) {
            if(a[i]>a[i+1]){
                min_Value=a[i+1];
                its_Index=i+1;
            } 
        }
    }    
    cout<<min_Value<<" "<<its_Index+1;
}    */

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }
}