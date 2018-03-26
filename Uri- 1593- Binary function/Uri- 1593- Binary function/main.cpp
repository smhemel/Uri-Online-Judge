//
//  main.cpp
//  Uri- 1593- Binary function
//
//  Created by S M HEMEL on 8/22/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
   long long int n,m,i,x,a[10000000000000000];
    cin >> n;
    while (n--)
    {
        int count = 0;
        i = 0;
        cin >> m;
        while(m!=0)
        {
            x = m%2;
            a[i]=x;
            m/=2;
            i++;
        }
        for (int j=0; j<i; j++)
        {
            if (a[j]==1)
            {
                count++;
            }
            else
                continue;
        }
        cout << count <<endl;
    }
    return 0;
}
