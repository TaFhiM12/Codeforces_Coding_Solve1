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
        int n , k ; cin >> n >> k;
        string str ; cin >> str ;
        int cntB =  count(str.begin(),str.end(),'B');
        if(k==cntB) cout << 0 << nl;
        else if(cntB < k ){
            cout << 1 << nl;
            int cnt = 0 ;
            for(int i=0;i<n;i++){
                if(str[i] == 'A') cnt ++;
                if(k-cntB == cnt) {cout << i+1 << " " << 'B' << nl;break;}
            }
        } 
        else{
            int cnt = 0 ;
            for(int i=0;i<n;i++){
                if(str[i] == 'B') cnt++;
                if(cnt == cntB - k ) {
                    cout << 1 << nl << i+1 << " " << 'A' << nl;
                    break;
                }
            }
        }
        
    }
    return 0;
}