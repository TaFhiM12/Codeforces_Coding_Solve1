#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx  = 1e6 + 1;
int cnt[mx] ;

int32_t main()
{
    optimize();
    for(int i=1 ; i<=mx ; i++){
        for(int j=i ; j<=mx ; j+=i){
            cnt[j]++;
        }
    }
    int n ; 
    cin >> n ;
    int a[n] ;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0 ;i<n ;i++) cout << cnt[a[i]] << nl ;
    return 0;
}