#include<bits/stdc++.h>
#define eb emplace_back
#define nl "\n" 
using namespace std ;
typedef vector<int> vi ;
#define int long long
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int n1 =  (n+3)/4 ;
        // for(int i=0;i<n1;i++){
        //     cout << 8 ;
        // }
        for(int i=0;i<n-n1;i++){
            cout << 9 ;
        }
        for(int i=0;i<n1;i++){
            cout << 8 ;
        }
        cout << nl ;

    }
    return 0;
}