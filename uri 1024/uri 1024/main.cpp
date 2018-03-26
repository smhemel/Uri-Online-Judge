//
//  main.cpp
//  uri 1024
//
//  Created by S M HEMEL on 10/6/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[1000],str1[1000];
    int i,k,j,n,l,m;
    cin >> m;
    getchar();
    while(m--) {
        gets(str);
        k = (int)strlen(str);
        for(i=0;i<k;i++)
        {
            if((str[i]>='A' && str[i]<='Z') || (str[i]>='a'&& str[i]<='z'))
                str[i] = str[i] + 3;
        }
        n=0;
        for(j=k-1;j>=0;j--)
        {
            str1[n] = str[j];
            n++;
        }
        str1[n] = '\0';
        l = k/2;
        for(i=l;i<k;i++)
            str1[i] =  str1[i] - 1;
        cout << str1 <<endl;
    }
}


