//
//  main.cpp
//  Uri 1235 - Inside Out
//
//  Created by S M HEMEL on 12/19/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    int n, size;
    string s;
    cin >> n;
    for (int i=0; i<=n; ++i)
    {
        getline(cin, s);
        if(i == 0)
            continue;
        size = (int)s.length();
        vector<char> v(size);
        for(int j = 0; j < size; ++j){v[j] = s[j];}
        reverse(v.begin(), v.begin() + (size/2));
        reverse(v.begin() + (size/2), v.begin() + size);
        for(int j = 0; j < size; ++j){cout << v[j];}
        cout << endl;
    }
    return 0;
}
