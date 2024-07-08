#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n ; cin >> n ;
    vector <pair<int,int>> v(n) ;
    vector <int> v1 ;
    for(auto &i : v ) cin >> i.first >> i.second ;
    int i = 0 ;
    int j = i+1 ;
    while(i<n){
        if(v[i].first < v[j].first && v[i].second > v[j].second){
            i++;
            j++;
        }
        else j++;
        if(j==n) {i++;j=i+1 ; v1.push_back(i+1);}
    }
    for(auto u:v1) cout << u << " ";
    cout << nl ;
    return 0;
}