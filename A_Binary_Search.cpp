#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx  = 1e5 ;
int num[mx] ;

bool solve(int a[] , int n , int x ){
    int l = 0 ;
    int r = n-1 ;
    while(l<=r){
        int mid = (l+r) / 2 ;
        if(num[mid] == x) return true;
        if(num[mid] > x) r =  mid - 1 ;
        else l = mid + 1 ;
    }
    return false ;
}

int32_t main()
{
    optimize();
    int n , k ; cin >> n >> k;
    for(int i=0;i<n;i++) cin >> num[i] ;
    while(k--){
        int a ; cin >> a ;
        if(solve(num , n , a)) cout << "YES" << nl;
        else cout << "NO" << nl ;
    }
    return 0;
}