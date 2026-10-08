#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
        ll n;cin>>n;
        vector<ll>v(n);
        
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=1;i<v.size()-1;i++){
            if(v[i-1]<v[i]&& v[i]>v[i+1]){
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;;
                return ;
            }
        }

        cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     ll t;cin>>t;
      while(t--){
        solve();
        
      }
    return 0;
}
