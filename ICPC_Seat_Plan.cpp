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
    int n , m; cin >> n >> m ;
    int cnt = 0 ;
    for(int i=0;i<n;i++){
        string str ="";
        for(int i=0;i<m;i++){
            char c  ; cin >> c ;
            str += c;
        }
        cnt += count(str.begin(),str.end(),'0');
    }
    cout << cnt << nl;
}