//
//  main.cpp
//  Uri 1257 - Array Hash
//
//  Created by S M HEMEL on 12/21/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n,l;
    char linha[51];
    int total;
    
    cin >> n;
    while(n--)
    {
        cin >> l;
        total = 0;
        for(int j=0;j<l; j++)
        {
            cin >> linha;
            for(int k=0; linha[k]!='\0'; k++)
                total += linha[k]-65 + j + k;
            memset(linha,NULL,sizeof(linha));
        }
        printf("%d\n", total);
    }
    return 0;
}
