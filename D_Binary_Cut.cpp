// CPP program to demonstrate the
// set::max_size() function
#include <bits/stdc++.h>
using namespace std;
int main()
{

	set<long long> s1, s2;

	s1.insert(1);

	// If set already contains elements
	cout << s1.max_size() << endl;

	// If set does not have elements
	cout << s2.max_size();

	return 0;
}
