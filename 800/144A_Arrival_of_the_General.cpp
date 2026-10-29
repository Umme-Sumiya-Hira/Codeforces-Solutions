#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    ll arr[n];
    ll maxi=INT_MIN,mini=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxi=max(maxi,arr[i]);
        mini = min(mini,arr[i]);
    }
    int mx=0,mn=0,mn_index;
    for(int i=0;i<n;i++){
        if(maxi==arr[i]){
            mx=i;break;
        }
    
    }
    for(int i=0;i<n;i++){
           if(mini==arr[i]){
            mn_index=i;
            mn = n-i-1;
        }
    
    }
    if(mx>mn_index)cout<<mx+mn-1<<endl;
    else cout<<mx+mn<<endl;


    return 0;
}
//@hira