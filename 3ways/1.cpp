    cin >> n;
    vector <vector<int> > g(n,vector <int> (n));
    vector <vector<int> > m(n);
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin >> g[i][j];
        }
    }
     for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
                if (g[i][j]==1)
                {
                    m[i].push_back(j);
                }
        }
    }
     for (int i=0;i<m.size();i++){
            if (m[i].empty())
                {
                    cout << 0;
                }


        for (int j=0;j<m[i].size();j++){

               cout << m[i][j]+1<<" ";
        }
        cout << endl;
}
    }
