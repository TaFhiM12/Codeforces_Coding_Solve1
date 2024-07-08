#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    double n ; 
    cin >> n ;

    double l= 0 ;
    double r = n;

    auto ck = [&] (double x)->bool{
        return double(x*x + sqrtl(x)) >= n ;
    };

    double ans = 0 ;
    int t=100;
    while(t--){
        double mid = (l+r)/2.0 ;
        if(ck(mid)){
            ans =  mid ;
            r = mid  ;
        }else l = mid ;
    }
    fraction(15);
    cout << r << nl ;
    return 0;
}