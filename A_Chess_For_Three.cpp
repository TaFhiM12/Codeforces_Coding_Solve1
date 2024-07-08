#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(3);
        for (int i = 0; i < 3; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        if ((arr[0] + arr[1] + arr[2]) % 2 != 0)
        {
            cout << -1 << "\n";
            continue;
        }
        int answer = 0, p = 1;
        while (arr[0] > 0)
        {
            if (arr[2] < arr[1])
                p = 1;
            else
                p = 2;
            arr[p]--, arr[0]--;
            answer++;
        }
        answer += min(arr[1], arr[2]);
        cout << answer << "\n";
    }
    return 0;
}