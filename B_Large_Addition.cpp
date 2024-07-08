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
        string str ;
        cin >> str;
        int n = str.size();
        if(str[0] == '1'&& str[n-1] != '9' && count(str.begin(),str.begin()+n-1 , '0') == 0 ) cout << "YES" << nl ;
        else cout << "NO" << nl ;
    }
    return 0;
}