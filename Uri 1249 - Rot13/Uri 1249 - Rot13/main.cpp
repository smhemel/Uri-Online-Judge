//
//  main.cpp
//  Uri 1249 - Rot13
//
//  Created by S M HEMEL on 12/20/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
char l[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklm";
char u[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM";

char rot13(char c)
{
    
    for (int i=0; i<=25; i++)
        if (c == l[i])
            return l[i+13];
    for (int i=0; i<=25; i++)
        if (c == u[i])
            return u[i+13];
    return c;
}

int main()
{
    char c;
    while ((c = getchar()) != EOF)
    {
        cout << rot13(c);
    }
    return 0;
}
