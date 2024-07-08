        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int count = 0;
        sort(v.begin(), v.end());
        if (v[0] > 0)
            count++;
        for (int i = 0; i < n; i++)
        {
            if (i >= v[i])
            {
                v[i] = 1;
            }
            else
                v[i] = 0;
        }
        auto it = unique(v.begin(), v.end());
        v.resize(distance(v.begin(), it));
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 1)
                count++;
        }
        cout << count << nl;