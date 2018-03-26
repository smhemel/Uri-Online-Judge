//
//  main.cpp
//  Uri 1234 - Dancing Sentence
//
//  Created by S M HEMEL on 12/19/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//


#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    string line;
    int c;
    while(getline(cin, line))
    {
        c = 0;
        for (int i=0; i<line.size(); i++)
        {
            if(line[i] != ' ')
            {
                if(c == 0)
                {
                    c = 1;
                    putchar(toupper(line[i]));
                }
                else
                {
                    c = 0;
                    putchar(tolower(line[i]));
                }
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
