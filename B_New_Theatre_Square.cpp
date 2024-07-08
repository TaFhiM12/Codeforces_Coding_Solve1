#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, x, y, t;
	cin >> t;
	while (t--)
	{
		cin >> n >> m >> x >> y;
		string s;
		int c = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			for (int j = 0; j < s.size(); j++)
			{
				if (s[j] == '.' && s[j + 1] == '.') {
					if (x * 2 <= y) c += x * 2;
					else c += y;
					j++;
				}
				else if (s[j] == '.') c += x;
			}
		}
		cout << c << endl;
	}
}