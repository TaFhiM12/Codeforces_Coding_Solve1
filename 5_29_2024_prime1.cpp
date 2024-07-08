#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx = 1e8 + 123 ;
bitset<mx> isPrime;
vector<int> primes ;
int N;


// complexity O(nln(n))....
// void primesGen(int n){
//     for(int i = 2; i <= n ; i++){
//         isPrime[i] = 1;
//     }

//     for(int i=2 ; i<=n ; i++){
//         for(int j=i+i ; j <= n ; j += i ){
//             isPrime[j] = 0 ;
//         }
//     }

//     for(int i=2 ; i<=n ; i++){
//         if(isPrime[i] == 1) primes.push_back(i);
//     }
// }


void primesGen1(int n){
    for(int i = 3 ; i <= n ; i += 2){
        isPrime[i] = 1;
    }

    for(int i=3 ; i<=n ; i += 2 ){
        for(int j=i+i ; j <= n ; j += i ){
            isPrime[j] = 0 ;
        }
    }

    for(int i=2 ; i<=n ; i++){
        if(isPrime[i] == 1) primes.push_back(i);
    }
}

int32_t main()
{
    optimize();
    int N = 1e8 ;
    primesGen1(N) ;
    for(auto u : primes) cout << u << nl ;
    return 0;
}