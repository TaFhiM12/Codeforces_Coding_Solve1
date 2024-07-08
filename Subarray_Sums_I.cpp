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

const int mx  =  2e5 + 123;
// int a[mx] ;

int32_t main()
{
    optimize();
    int n , k , sum = 0 ;
    int cnt=0;
    cin >> n >> k ;
    map<int,map<int,int>>mp;
    for(int i=0;i<n;i++){
        int a ;
        cin >> a;
        sum += a;
        if(mp[sum-k][i]) {cnt++;}
        mp[sum][i] = 1 ;
    }
    cout << cnt << nl;
    return 0;
}