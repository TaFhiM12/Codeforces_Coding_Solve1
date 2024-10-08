#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

void solve(int n , string str){
    string temp = str.substr(0,n/2);
    string temp1 = str.substr(n/2);
    // cout << temp << " " << temp1 << " " << nl ;
    if(temp == temp1) cout << "YES" << nl ;
    else cout << "NO" << nl ;
}

int32_t main()
{
    optimize();
    int t ; cin >> t;
    while(t--){
        string str ; cin >> str ;
        int n = str.size();
        if(n&1) cout << "NO" << nl ;
        else{
            string temp = str ;
            if(n == 1 || (unique(str.begin(),str.end())-str.begin()) == 1 ) cout << "YES" << nl ;
            else{
                solve(n,temp);
            }
        }
    }
    return 0;
}