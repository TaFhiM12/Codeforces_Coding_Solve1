#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n , x ; cin >> n >> x ;
    vector<int>v(n);
    int cnt = 0 ;
    for(int i=0 ; i<n ; i++) cin >> v[i];
    sort(v.rbegin(),v.rend());
    int i = 0 , j = n-1 ;
    // int cnt = 0ll ;
    while(i<=j){
        if(v[i]+v[j] <= x){
            cnt++;
            i++;
            j--;
        }
        else {
            cnt++;
            i++;
        }
    }
    cout << cnt << nl;
    return 0;
}