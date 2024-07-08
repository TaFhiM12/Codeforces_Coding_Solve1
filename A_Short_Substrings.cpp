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
        string b ; cin >> b ;
        if(b.size()<=3) cout << b << nl ;
        else {
            string a = "";
            a += b[0];
            int n = b.size();
            for(int i=1 ; i<n-1 ; i+=2) a += b[i];
            a += b[n-1];
            cout << a << nl ;
        }
    }
    return 0;
}