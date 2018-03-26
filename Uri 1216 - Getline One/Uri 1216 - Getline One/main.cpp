//
//  main.cpp
//  Uri 1216 - Getline One
//
//  Created by S M HEMEL on 12/21/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    int dist = 0, new_dist, count = 0;
    char newline;
    string name;
    while (getline(cin, name))
    {
        cin >> new_dist >> noskipws >> newline;
        dist += new_dist;
        count++;
    }
    printf("%.1lf\n", dist / float(count));
    return 0;
}
