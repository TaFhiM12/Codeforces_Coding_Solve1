#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n ; cin >> n;
    int l = 1 , r = n*n ;
    int target = (n*n + 1 )/2 ;
    
    auto ck = [&](int x ) -> int{
        int fre_cnt= 0 ;
        for(int i=1;i<=n;i++){
            fre_cnt += min(n,x/i ) ;
        }

        return fre_cnt;
    };

    int ans = 0 ;
    while(l<r){
        int mid = (l+r)/2 ;
        if(ck(mid) >= target){
            r = mid ;
        }else{
            l =  mid + 1  ;
        }
    }

    cout << r << nl ;
    return 0;
}