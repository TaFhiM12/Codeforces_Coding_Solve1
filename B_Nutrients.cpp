#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n , m ; cin >> n >> m ;
    vector <int> need(m) , eatFood(m);
    for(int i=0 ; i<m ; i++){
        cin >> need[i];
    }
    while(n--){
        for(int i=0 ;i<m ; i++){
            int a ; cin >> a ;
            eatFood[i] += a ;
        }
    }

    int cnt = 0 ;
    for(int i=0 ; i<m ; i++){
        if(eatFood[i] >= need[i]) cnt++;
    }

    if(cnt == m) cout << "Yes" << nl ;
    else cout << "No" << nl ;
    return 0;
}