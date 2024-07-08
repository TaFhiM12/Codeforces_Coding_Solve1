#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx  = 1e6 + 123 ;
int sumOfDiv[mx];

int32_t main()
{
    optimize();

    for(int i=1; i<=mx ; i++){
        for(int j=i ; j<=mx ; j += i ){
            sumOfDiv[j] += i ;
        }
    }

    int n ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++){
        cout << i << "  : " << sumOfDiv[i] << nl ;
    }
    
    return 0;
}