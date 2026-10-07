#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum^=a[i];
        }
        if(n%2 !=0 )cout<<sum<<endl;
        else{
            if(sum==0)cout<<0<<endl;
            else cout<<-1<<endl;
        }
    }
  
    return 0;
}
