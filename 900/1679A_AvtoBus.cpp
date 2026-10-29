#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
     ll n;cin>>n;

        if(n<4 || n%2 !=0)cout<<-1<<endl;
        else cout<<(n+6-1)/6<<" "<<n/4<<endl;
     
     

    }

    return 0;
}