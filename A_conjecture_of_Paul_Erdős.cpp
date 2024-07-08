#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx = 1e7 + 123 ;
vector<int> v;
bitset<mx>isprime;
void seive(int n){
    isprime[2] = 1 ;
    for(int i=3 ; i<=mx ; i += 2) isprime[i] = 1 ;
    int sq =  sqrtl(mx);
    for(int i=3 ; i<=sq ; i+=2){
        if(isprime[i]){
            for(int j = i*i ; j<=mx ; j += i){
                isprime[i] = 0;
            }
        }
    }

    v.push_back(2);
    for(int i=3 ; i<=n ; i += 2) {
        if(isprime[i]) {
            v.push_back(i);
        }
    }
}

int cnt[mx] ;
int32_t main()
{
    optimize();
    int lim = 1e7 + 1 ;
    seive(lim);
    // int limx = 3200 ;
    // int limy =  60 ;
    // for(int i=1; i<=limx;i++){
    //     for(int j=1 ; j <= 60 ; j++){
    //         int val  =  i*i + j*j*j*j ;
    //         if(val <= mx && isprime[val]){
    //             cnt[val] = 1 ;
    //         }
    //     }
    // }
    
    for(int i=1 ; i<=20 ;i++) cout << v[i] <<nl ;
    return 0;
}