#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx = 1e7 + 123 ;
bitset<mx>isprime;

int cnt[mx] ;

void seive(){
    isprime[2] = 1 ;
    for(int i=3 ; i<=mx ; i += 2) isprime[i] = 1 ;

    int sq =  sqrtl(mx);

    for(int i=3 ; i<=sq ; i+=2){
        if(isprime[i]){
            for(int j = i*i ; j<=mx ; j += i){
                isprime[j] = 0;
            }
        }
    }
}

int32_t main()
{
    optimize();
    seive();
    int limx = 3200 ;
    int limy =  60 ;
    for(int i=1; i<=limx;i++){
        for(int j=1 ; j <= 60 ; j++){
            int val  =  i*i + j*j*j*j ;
            if(val <= mx && isprime[val]){
                cnt[val] = 1 ;
            }
        }
    }
    for(int i=1 ; i<=mx ;i++) {
        cnt[i] += cnt[i-1];
    }
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        cout << cnt[n] <<nl ;
    }
    return 0;
}