//
//  main.cpp
//  Uri 1583 - Contamination
//
//  Created by S M HEMEL on 4/6/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <map>
#include <cstring>
using namespace std;
char matrix[100][100];
bool check[100][100];
int dr[]={1,0,0,-1};
int dc[]={0,-1,1,0};
void flood_fill(int i,int l,char c)
{
    check[i][l] = 1;
    matrix[i][l] = 'T';
    for(int k=0; k<4; k++)
    {
        int v = i+dr[k];
        int u = l+dc[k];
        if(!check[v][u] && matrix[v][u]=='A')
            flood_fill(v,u,'A');
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    while (cin >> n >> m && n && m)
    {
        for(int i=0; i<n; i++)
            for(int l=0; l<m; l++)
                cin >> matrix[i][l];
        
        for(int i=0; i<n; i++)
            for(int l=0; l<m; l++)
                if(matrix[i][l]=='T')
                    flood_fill(i,l,'A');
        
        for(int i=0; i<n; i++)
            cout << matrix[i] << endl;
        memset(check,0,sizeof(check));
        memset(matrix,0,sizeof(matrix));
        cout << endl;
    }
    return 0;
}
