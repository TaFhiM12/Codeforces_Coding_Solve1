#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n ,m ;
    cin >> n >> m ;
    vector <int> v(m);
    for(int i=0;i<m;i++){
        cin >> v[i];
    }

    int cnt  = v[0]-1 ;
    for(int i=1;i<m;i++){
        if(v[i-1]>v[i]){
            cnt+= (n-v[i-1]) + v[i];
        }
        else cnt += (v[i]-v[i-1]);
    }

    cout << cnt << nl ;
    return 0;
}