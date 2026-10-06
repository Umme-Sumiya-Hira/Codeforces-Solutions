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
        int cnt=0;
        bool cnd = false;
        
        while(true){
            if(n==1){
                break;
            }
            if(n%6 == 4 || n%6==2){
                cnd = true;
                break;
            }
            if(n%6 == 0){
                n/=6;cnt++;
            }
            else
            {
             n*=2;cnt++;   
            } 
        }
        if(cnd == true)cout<<-1<<endl;
        else cout<<cnt<<endl;

    }
    
    return 0;
}
