#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

void AND_THEN_THERE_WHERE_K(int n){
    int temp = 1 ;
    while(temp<=n){
        temp *= 2;
    }
    temp /= 2 ;
    cout << temp - 1 << nl ;
}

int32_t main()
{
    optimize();
    // cout << (6&5&4&3) << nl ;
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ; 
        AND_THEN_THERE_WHERE_K(n);
    }
    return 0;
}