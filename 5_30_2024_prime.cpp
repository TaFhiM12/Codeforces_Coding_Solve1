#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx  = 1e8 ;
bitset<mx> isPrime;
vector<int> prime;

int32_t main()
{
    optimize();

    for(int i=3 ; i<= mx ; i += 2) isPrime[i] = 1 ;

    int n ; cin >> n ;
    for(int i = 3 ; i<=n; i+=2){
        for(int j = i+i ; j<=n ; j += i){
            isPrime[j] = 0 ;
        }
    }

    prime.push_back(2);
    for(int i=3 ; i<=n ; i += 2) {
        if(isPrime[i]) prime.push_back(i);
    }
    
    for(auto u : prime) cout << u << " ";
    return 0;
}