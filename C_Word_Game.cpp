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
        int n ; cin >> n ;
        string str[3][n];
        map<string,int> mp ;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                cin >> str[i][j];
                mp[str[i][j]]++;
            }
        }
        for(int i=0 ; i<3 ; i++){
            int sum = 0 ;
            for(int j=0 ; j<n ; j++){
                if(mp[str[i][j]] == 1) sum += 3 ;
                else if(mp[str[i][j]] == 2) sum += 1;
            }
            cout << sum << " " ;
        }
        cout<< nl ;
    }
    return 0;
}