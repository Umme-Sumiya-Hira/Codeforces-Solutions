#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        
        vector<string>v(8);
        for(int i=0;i<8;i++){
            cin>>v[i]; //we take the input of row as a string
        }
        bool red_fnd=false;
        for(int i=0;i<8;i++){
            int cnt=0;//cnt R for every row and reset begining the next row

            for(int j=0;j<8;j++){
                if(v[i][j]=='R'){
                    cnt++;
                       
                }
            }
            if(cnt==8){
            red_fnd=true;
                break;
                }
            }
            if(red_fnd)cout<<"R"<<endl;
            else cout<<"B"<<endl;

    }   
    return 0;
}