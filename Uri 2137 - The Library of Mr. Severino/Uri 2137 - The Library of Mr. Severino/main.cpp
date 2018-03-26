//
//  main.cpp
//  Uri 2137 - The Library of Mr. Severino
//
//  Created by S M HEMEL on 4/18/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
bool comp(const string &left, const string &right)
{
    if(left.length()!=right.length())
        return left.length()<right.length();
    else
        return left<right;
}
int main()
{
    int test;
    while (cin >> test)
    {
        vector <string> s(test);
        for(int i=0; i<test; i++)
            cin >> s[i];
        sort(s.begin(),s.end(),comp);
        for(const string &s1 : s)
            cout << s1 << endl;
    }
    return 0;
}
