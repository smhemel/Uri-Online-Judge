//
//  main.cpp
//  Uri 1238 - Combiner
//
//  Created by S M HEMEL on 12/19/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    
    int n,a,b;
    char s[50];
    char s1[50];
    
    scanf("%d",&n);
    while(n--)
    {
        cin >> s >> s1;
        a = 0;
        b = 0;
        for(int i=0; i<50; i++)
        {
            if(s[i] == '\0')
                a = 1;
            if(s1[i] == '\0')
                b = 1;
            if(a == 1 && b == 1)
                break;
            if(a == 0)
                printf("%c",s[i]);
            if(b == 0)
                printf("%c",s1[i]);
        }
        printf("\n");
    }
    
    return 0;
}
