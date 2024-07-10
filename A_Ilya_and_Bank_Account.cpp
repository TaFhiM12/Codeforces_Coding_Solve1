#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n ; cin >> n ;
    if(n>=0) cout << n << nl ;
    else {
        int temp = n%10;
        int temp2 = n/10 ;
        int temp3 = temp2/10 ;
        int temp4 = temp3*10 + temp ;
        if(temp2>=temp4) cout << temp2 << nl;
        else cout << temp4 << nl ;
    }
    return 0;
}