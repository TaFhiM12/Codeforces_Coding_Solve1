#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
int m = 19;
int powl(int n,int a) {
    if(n == 0) {
        return 1;
    } else if(n & 1) {
        return (a * powl(n / 2, (a * a) % m)) % m;
    } else {
        return powl(n / 2, (a * a) % m);
    }
}
int32_t main()
{
    map<int, int> hsh;
    int a = 0;
    for (int i = 0;i <= 100; i++) {
        a += powl(i, 3);
        if (hsh[a]) {
            break;
        } else {
            hsh[a] = 1;
        }
    }
    return 0;
}

/*
100 / 19 = 
1 4 13 2 7 3 10 12 18 17 14 5 16 11 15 8 6 0
1 4 13 2 7 3 10 12 18 17 14 5 16 11 15 8 6 0 
1 4 13 2 7 3 10 12 18 17 14 5 16 11 15 8 6 0 
1 4 13 2 7 3 10 12 18 17 14 5 16 11 15 8 6 0 
1 4 13 2 7 3 10 12 18 17 14 5 16 11 15 8 6 0 
1 4 13 2 7 3 10 12 18 17 14
*/