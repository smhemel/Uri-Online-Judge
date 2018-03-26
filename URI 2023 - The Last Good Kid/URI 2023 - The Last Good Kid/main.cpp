//
//  main.cpp
//  URI 2023 - The Last Good Kid
//
//  Created by S M HEMEL on 4/19/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string convert(string a) {
    for (auto &i : a)
        i = tolower(i);
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string line;
    string ans = "";
    while(getline(cin, line))
        if(convert(line)>convert(ans))
            ans = line;
    cout << ans << endl;
    return 0;
}
