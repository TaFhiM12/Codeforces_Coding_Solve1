#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t ;
    cin >> t ;
    while(t--){
        int a , b ;
        cin >> a >> b ;
        int temp = abs(a-b);
        if(temp%10 == 0) {
            cout << temp/10 << nl ;
        }
        else cout << temp / 10 + 1 << nl ;
    }
    return 0;
}