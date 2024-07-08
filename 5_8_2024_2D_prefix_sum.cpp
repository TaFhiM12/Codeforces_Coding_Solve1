#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx = 1e3 + 10 ;
int pre[mx][mx];
int arr[mx][mx] ;

int32_t main()
{
    optimize();
    int n , m ; 
    cin >> n >> m  ;

    for(int i=1 ; i<=n ; i++){
        for(int j=1;j<=m;j++){
            cin >> arr[i][j] ;
            pre[i][j] = arr[i][j] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] ;
        }
    }
    for(int i=1 ; i<=n ; i++){
        for(int j=1;j<=m;j++){
            cout << pre[i][j] << "   " ;
        }
        cout << endl;
    }
    
    cout <<endl<<"After Query : " << endl  << endl ;

    int q ; cin >> q ;
    while(q--){
        int a,b,c,d ; cin >> a >> b >> c >> d ;
        cout << pre[c][d] - pre[a-1][d] - pre[c][b-1] + pre[a-1][b-1] << nl ;
    }

    return 0;
}