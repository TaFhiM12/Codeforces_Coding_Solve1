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
    int n ; cin >> n ;
    for(int i=n+1 ; i;i++ ){
        string str = to_string(i);
        string temp = str;
        sort(temp.begin(),temp.end());
        int n1 = unique(temp.begin(),temp.end()) - temp.begin();
        // cout << n1 << nl;
        if(n1==4) {
            cout << str << nl;
            return 0 ;
        }
    }
    return 0;
}