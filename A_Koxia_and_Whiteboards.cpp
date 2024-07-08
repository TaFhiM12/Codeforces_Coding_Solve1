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
    int t ; cin >> t ;
    while(t--){
        int n , m  ; cin >>n >>m ;
        multiset<int>st;
        // st.insert(1);
        // st.insert(2);
        // st.insert(3);
        // st.insert(4);
        // st.erase(st.begin());
        // for(auto i : st) cout << i << " ";
        // cout << nl;
        // vector<int> v(n);
        // vector<int> u(m);
        // for(auto &i : v) cin >> i ;
        // for(auto &i : u) cin >> i ;
        // // sort(v.begin(),v.end());
        // // sort(u.rbegin(),u.rend());
        // if(n>=m){
        //     for(int i=0;i<m;i++){
        //         v[i]=u[i];
        //     }
        // }
        // else {
        //     for(int i=0;i<n;i++){
        //         v[i]=u[i];
        //     }
        // }
        // int sum = 0 ;
        // for(auto &i : v) {
        //     sum +=  i ;
        // }
        // cout << sum << nl;

        for(int i=0;i<n ; i++){
            int a ; cin >> a ;
            st.insert(a);
        }
        for(int i=0;i<m ; i++){
            int a ; cin >> a ;
            st.erase(st.begin());
            st.insert(a);
        }
        int sum= 0 ;
        for(auto i : st ) sum += i;
        cout << sum << nl;
    }
    return 0;
}