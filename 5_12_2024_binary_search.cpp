#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int binary_search(int a[] , int n , int x){

    int low = 0 ; 
    int high =  n-1 ;
    while(low<=high){
        int mid  =  low+high /  2 ;
        if(a[mid] ==  x) return mid;
        if(a[mid] < x ) low = mid+1;
        else high = mid - 1 ;
    } 
    return -1 ;
}

int32_t main()
{
    optimize();
    int x ; cin >> x ;
    int n ; cin >> n ;
    int a[n];
    for(int i=0 ; i<n ; i++) cin >> a[i];
    cout <<binary_search(a,n,x) << nl;
    return 0;
}