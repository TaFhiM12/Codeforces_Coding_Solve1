#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx = 1e7+123;
bitset<mx> isPrime;
vector<int> primes;
int cntPrime[mx];

void seive( int n )
{
    for ( int i = 3; i <= n; i += 2 ) isPrime[i] = 1;

    int sq = sqrt(n);
    for ( int i = 3; i <= sq; i += 2 ) {
        if(isPrime[i]) {
            for ( int j = i*i; j <= n; j += i ) {
                isPrime[j] = 0;
            }
        }
    }

    isPrime[2] = 1;
    primes.push_back(2);

    for ( int i = 3; i <= n; i += 2 ) {
        if(isPrime[i] == 1) {
            primes.push_back(i);
        }
    }
}

int NOD(int n){
    int ans = 1 ;
    for(auto u : primes){
        if(1LL * u * u > n) break ;
        if(n%u == 0){
            int cnt = 0 ;
            while(n%u == 0){
                cnt++;
                n = n/u ;
            }
            cnt++;
            ans *= cnt ;
        }
    }
    if(n>1) {
        ans *= 2 ;
    }

    return ans;
}

int32_t main()
{
    optimize();
    int lim = 1e7 ;
    seive(lim);
    int n ; 
    cin >> n ;
    cout << "No. of Divisor of n is : " << NOD(n) << endl;
    return 0;
}