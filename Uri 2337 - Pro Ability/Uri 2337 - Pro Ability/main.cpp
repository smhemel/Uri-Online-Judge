//
//  main.cpp
//  Uri 2337 - Pro Ability
//
//  Created by S M HEMEL on 4/19/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
long long int a[100],b[100];
int main()
{
    a[1] = 2;
    a[2] = 3;
    for(long long int i=3; i<50; i++)
        a[i] = a[i-1]+a[i-2];
    long long int n;
    while (cin >> n)
    {
        long long int b = pow(2,n);
        cout << (a[n]/(__gcd(a[n],b))) << "/" << (b/(__gcd(a[n],b))) << endl;
    }
    return 0;
}
