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
    if(n<1582){
        if(n%4==0) cout << "I can participate in LCPC"<<nl;
        else cout << "I have to travel back to the past"<<nl;
    }
    else {
        if(n%4==0 && (n%100!=0 || n%400==0)) cout << "I can participate in LCPC"<<nl;
        else cout << "I have to travel back to the past"<<nl;
    }
    return 0;
}