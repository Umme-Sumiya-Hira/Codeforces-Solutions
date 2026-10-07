#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll>v;
        v.push_back(0);
        for(int i=0;i<n;i++){
            int a;cin>>a;
            v.push_back(a);
        }
        v.push_back(x);

        ll sz = v.size();
        ll max_distance = INT_MIN;
        for(int i=1;i<sz;i++){
            if(i==sz-1){
                max_distance = max(max_distance,2*(v[i]-v[i-1]));
            }
            else {
                max_distance = max(max_distance,(v[i]-v[i-1]));
            }
        }
        cout<<max_distance<<endl;
    }


    return 0;
}