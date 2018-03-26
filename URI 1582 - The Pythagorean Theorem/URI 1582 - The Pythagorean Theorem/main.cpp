//
//  main.cpp
//  URI 1582 - The Pythagorean Theorem
//
//  Created by S M HEMEL on 4/19/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int mdc(int x, int y) {
    int mdc;
    mdc = min(x, y);
    while(x%mdc != 0 || y%mdc != 0)
        mdc--;
    return mdc;
}
int main(int argc, const char * argv[])
{
    int x, y, z, aux;
    while(cin >> x >> y >> z){
        if(y >= x && y >= z) {
            aux = y;
            y = x;
            x = aux;
        } else if(z >= x && z >= y) {
            aux = z;
            z = x;
            x = aux;
        }
        cout << "tripla";
        if(x*x == (y*y)+(z*z)) {
            cout << " pitagorica";
            if(mdc(mdc(x,y),z) == 1)
                cout << " primitiva";
        }
        cout << endl;
    }
    return 0;
}
