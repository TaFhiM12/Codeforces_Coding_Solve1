#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n , k ; cin >> n >> k ;

    double a[n];
    for(int i=0 ; i<n ; i++){
        cin >> a[i] ;
    }
    // for(int i=0 ;  i<n ; i++) cout << a[i] << " ";
    // cout << nl ;
    double l=0 ;
    double r = 1e8;

    auto ck = [&](double x) -> bool{
        int sum = 0 ;
        for(int i=0 ; i<n ; i++){
            sum +=  floor(a[i] / x );
        }
        return sum >= k ;
    };

    double ans = 0 ;
    int t=100; 
    while(t--){
        double mid = (l+r) / 2.0 ;
        if(ck(mid)){
            ans = mid ;
            // cout << "ans : " << ans << nl ;
            l = mid  ;
        }
        else {
            r = mid ; 
        }
    } 
    fraction(20);
    cout << ans << nl ;
    return 0;
}