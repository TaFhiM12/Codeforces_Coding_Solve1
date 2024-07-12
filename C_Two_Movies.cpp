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
        vector <int> v1,v2;
        for(int i=0;i<n;i++){
            int a ; cin >> a ;
            v1.push_back(a);
        }
        for(int i=0;i<n;i++){
            int a ; cin >> a ;
            v2.push_back(a);
        }
        
        int first = 0 , second = 0 ;
        for(int i=0 ; i<n ; i++){
            if(v1[i] == v2[i]) continue;
            else{
                if(v1[i] > v2[i] ) first += v1[i];
                else second += v2[i];
            }
            // else if(v1[i] == v2[i]){
            //     if(v1[i] == 1) {
            //         if(first < second) first += v1[i];
            //         else second += v2[i];
            //     }
            //     else if(v1[i] == -1) {
            //         if(first < second) second += v2[i];
            //         else first += v1[i];
            //     }
            // }
        }
        for(int i=0 ; i<n ; i++){
            if(v1[i] != v2[i]) continue; 
            else{
                if(v1[i] == 1) {
                    if(first < second) first += v1[i];
                    else second += v2[i];
                }
                else if(v1[i] == -1) {
                    if(first < second) second += v2[i];
                    else first += v1[i];
                }
            }
        }
        cout << min(first,second) << nl ;
    }
    return 0;
}