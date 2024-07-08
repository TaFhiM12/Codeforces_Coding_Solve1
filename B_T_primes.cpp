#include<bits/stdc++.h>
using namespace std;
#define int long long 

const int mx = 1e6+123;
int prime[mx];
void seive(){
    for(int i=2;i*i<=mx;i++){
        if(!prime[i]){
            for(int j=i*i;j<=1e6;j+=i){
                prime[j] = 1;
            }
        }
    }
}


int32_t main(){
    seive();
    int n;cin>>n;
 
    for(int i=0;i<n;i++) {
        int a;cin >> a;
        int b = sqrt(a);
        if(b*b == a and !prime[b] and a!= 1){
            cout << "YES" <<'\n';
        }else{
            cout << "NO" <<'\n';
        }
    }
    return 0;
}