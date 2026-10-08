#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
       ll n;cin>>n;
       vector<ll>v(n);
       int mini = INT_MAX;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            if(a<0){
                a*=(-1);
            }
            mini = min(mini,a);
        }
        cout<<mini<<endl;
        
    
    
    return 0;
}
