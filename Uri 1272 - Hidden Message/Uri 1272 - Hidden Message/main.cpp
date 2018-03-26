//
//  main.cpp
//  Uri 1272 - Hidden Message
//
//  Created by S M HEMEL on 12/20/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <mutex>
#include <memory>
#include <iostream>
#define debug(x) cout << #x " = " << (x) << endl
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tc; cin >> tc;
    string line; getline(cin, line);
    while (tc--) {
        getline(cin, line);
        stringstream ss(line);
        while (ss >> line) {
            cout << line[0];
        }
        cout << endl;
    }
    
    return 0;
}
