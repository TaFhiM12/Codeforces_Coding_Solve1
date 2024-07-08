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
void twin_prime()
{
    int j=1;
    for(int i = 3;i<=20000000;i++){
        if(primes[i] && prime[i+2])
        {
            tprime[j++] = i;
        }
    }
}
int main()
{
    memset(prime,true,sizeof prime);
    sieve();
    twin_prime();
    int n;
    while(scanf("%d",&n)==1)
    {

          printf("(%d, %d)\n",tprime[n],tprime[n]+2);
    }
   return 0;
}