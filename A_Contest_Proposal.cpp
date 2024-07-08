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
    int t ; cin >> t ;
    while(t--){
        int n ,cnt = 0 ; cin >> n ;
        vector<int> a ;
        vector<int> b ;
        for(int i=0;i<n;i++){
            int a1 ; cin >> a1 ;
            a.push_back(a1);
        }
        for(int i=0;i<n;i++){
            int a1 ; cin >> a1 ;
            b.push_back(a1);
        }

        for(int i=0;i<n ;i++){
            if(a[i]>b[i]) {a.push_back(b[i]);cnt++;sort(a.begin(),a.end());}
        }
        cout << cnt << nl;
    }
    return 0;
}