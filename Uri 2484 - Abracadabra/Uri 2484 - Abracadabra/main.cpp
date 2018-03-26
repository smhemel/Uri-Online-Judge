//
//  main.cpp
//  Uri 2484 - Abracadabra
//
//  Created by S M HEMEL on 4/18/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    while(cin >> s)
    {
        for(int i=0 ; i<(int)s.size(); i++)
        {
            for(int j=0 ; j<(int)s.size(); j++)
            {
                if(j<i)
                    cout << " ";
                else
                    if(j == s.size()-1)
                        cout << s[j-i];
                    else
                        cout << s[j-i] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
