#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
using namespace std;

int32_t main() {
    vector<int> v = {15, 20, 10, 5, 2,3,1};
    sort(v.begin(),v.end());
    vector<int>::iterator i;
    for( i = v.begin(); i != v.end();i++)
    cout << &(*i) << endl;
    bool n = binary_search(v.begin(),v.end(),20) ;
    cout << n << endl;

    cout << "************"<<nl;
    auto lower_bound_it = lower_bound(v.begin(), v.end(), 2);
    cout << "Lower bound of 2: " << distance(v.begin(), lower_bound_it) << endl;

    auto upper_bound_it = upper_bound(v.begin(), v.end(), 2);
    cout << "Upper bound of 2: " << distance(v.begin(), upper_bound_it) << endl;

    return 0;
}