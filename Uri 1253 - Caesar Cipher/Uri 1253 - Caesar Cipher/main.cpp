//
//  main.cpp
//  Uri 1253 - Caesar Cipher
//
//  Created by S M HEMEL on 12/19/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,m;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s >> m;
        int len = (int) s.length();
        for (int i=0; i<len; i++)
            if((s[i]-m)<65)
                printf("%c", (s[i]-m)+26);
            else
                printf("%c",(s[i]-m));
        cout <<endl;
    }
    return 0;
}
