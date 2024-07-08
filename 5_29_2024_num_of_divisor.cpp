#include<bits/stdc++.h>
using namespace std ;
#define endl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx  =  1e7 + 123 ;
int cnt[mx] ;

int32_t main()
{
    optimize();
    int n ; cin >> n ; 
    for(int i=1;i<=n;i++){
        for(int j=i ; j<=n ; j+=i){
            cnt[j]++;
        }
    }
    for(int i=1 ; i<=n ; i++){
        cout << cnt[i] << " ";
    }
    cout << endl ;
    return 0;
}