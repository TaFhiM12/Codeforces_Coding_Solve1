#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int a[100] , ans ;

int32_t main()
{
    optimize();
    int n , m ;
    cin >> n >> m ;
    for(int i=0 ; i<n ; i++){
        cin >> a[i] ;
    }

    sort(a,a+n);
    for(int i=0 ; i<m ; i++){
        if(a[i]<=0)
        ans += abs(a[i]) ;
    }

    cout << ans << nl ;
    return 0;
}