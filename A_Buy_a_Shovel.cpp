#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int amount , r ;
    cin >> amount >> r ;
    for(int i= 1 ; i ; i++){
        int ans = i*amount ;
        if(ans % 10 == 0 || (ans%10) == r){
            cout << i << nl ;
            return 0 ;
        }
    }
    return 0;
}