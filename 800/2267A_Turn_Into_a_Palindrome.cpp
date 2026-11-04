#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve(){
    int n;char c;string s;
    cin>>n>>c>>s;
    int cnt =0;
    for(int i=0;i<n/2;i++){
        if(s[i] != s[n-i-1] && s[i] == c ||s[i] != s[n-i-1] && s[n-i-1] == c ){
            cnt+=1;
        }
        if(s[i] != s[n-i-1] && s[i] != c && s[n-i-1] != c){
            cnt+=2;
        }
    }
     cout<<cnt<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;cin>>t;
    while(t--){
        solve();
    }

    return 0;
}