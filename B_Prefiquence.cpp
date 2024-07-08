#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t ; cin >> t ;
    while(t--){
        int n , m ;
        cin >> n >> m ;
        string ns,ms; cin >> ns>>ms ;
        int i=0,j=0;
        int cnt = 0 ;
        while(j<m){
            if(ns[i] == ms[j]){
                cnt ++ ;
                i++;
                j++;
            }
            else j++;
        }
        cout << cnt << nl ;
    }
    return 0;
}