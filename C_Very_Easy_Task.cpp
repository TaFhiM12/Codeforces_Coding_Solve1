#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n , x , y ;
    cin >> n >> x >> y  ;
    

    int l=1 ;
    int r = max(x,y) * n ;
    
    auto ck = [&] (int val ) -> bool {
        int cnt = 1 ;
        if(val < min(x,y))
        return false;
        val -= min(x,y);
        cnt += (val/x) + (val/y);
        return cnt >= n ;
    };

    
    int ans = 0 ;
    while(l+1 < r ){
        int mid = (l+r) / 2 ;
        if(ck(mid)){
            r =  mid;
        }
        else {
            l = mid;
        }
    }
    cout << r << nl ;
    return 0;
}