#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
     ll n;cin>>n;
     vector<ll>v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
    int cnt = 0;
    for(int i=n-2;i>=0;i--){
        while(v[i] >= v[i+1] && v[i]>0){
            cnt++;
            v[i]=v[i]/2;
        }
        if(v[i]==v[i+1]){
        cout<<-1<<endl;
        return ;}
    }
    cout<<cnt<<endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t; 
    
    while (t--) {
    solve();
    }
    return 0;
}