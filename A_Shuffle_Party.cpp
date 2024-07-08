#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int cnt[mx] ;
int32_t main()
{
    optimize();
    int lim = 1000 ;
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
    for(auto u : v) cout << u << nl ;
    return 0;
}