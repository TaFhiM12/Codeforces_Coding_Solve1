#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx = 1e5 + 123 ;
vector <int> v;
bitset<mx> isprime;

void primeCheck(){
    isprime[2]=1;
    int sq = sqrtl(mx);
    for(int i=3 ; i<= mx ; i += 2) isprime[i] = 1 ;
    for(int i = 3 ; i<=sq ; i+=2){
        if(isprime[i]){
            for(int j = i+i ; j <= mx ; j += i){
                isprime[j] = 0 ;
            }
        }
    }
}

int32_t main()
{
    optimize();
    int n ;
    cin >> n ;
    if(n<3){
        if(n==1) cout << 1 << nl << 1 << nl ;
        else if(n==2) cout << 1 << nl << "1 1" << nl ;
    }
    else{
        primeCheck();
        cout << 2 << nl ;
        for(int i=2 ; i<=n+1 ; i++){
            if(isprime[i]) cout << 1 << " ";
            else cout << 2 << " ";
        }
        cout << nl ;
    }
    return 0;
}