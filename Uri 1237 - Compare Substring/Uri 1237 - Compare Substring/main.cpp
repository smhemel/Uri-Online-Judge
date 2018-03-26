//
//  main.cpp
//  Uri 1237 - Compare Substring
//
//  Created by S M HEMEL on 4/18/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//


#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    string first,second;
    while(getline(cin,first) && getline(cin,second))
    {
        int m = (int)first.length();
        int n = (int)second.length();
        int res = 0;
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
            {
                if(first[i]==second[j])
                {
                    int c = 0;
                    for(int k=0; k+i<m && k+j<n; k++) {
                        if(first[k+i]!=second[k+j])
                            break;
                        c++;
                    }
                    if(c>res)
                        res = c;
                }
            }
        cout << res << endl;
    }
    return 0;
}
