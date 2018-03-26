//
//  main.cpp
//  Uri 1148 - Countries at War
//
//  Created by S M HEMEL on 4/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//


#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
struct Grafo {
    int v;
    int a;
    int road[501][501];
}grafo;
void dijkstra(int start,int end)
{
    int w = 0;
    int point[501],check[501],cost[501];
    memset(check, -1, sizeof(check));
    memset(cost, 999999, sizeof(cost));
    point[start] = start;
    cost[start] = 0;
    while(true)
    {
        int temp = 999999;
        for(int l=0; l<grafo.v; l++)
            if(check[l] == -1 && temp>cost[l]){
                temp = cost[w=l];
                cout << (w=l) << endl;
            }
        if(temp==999999)
            break;
        check[w] = point[w];
        
        for(int l=0; l<grafo.v; l++)
            if(cost[l] > cost[w] + grafo.road[w][l]) {
                cost[l] = cost[w] + grafo.road[w][l];
                point[l]= w;
            }
    }
    if(cost[end]<999999)
        printf("%d\n", cost[end]);
    else
        printf("Nao e possivel entregar a carta\n");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    memset(&grafo, 0, sizeof(grafo));
    int x,y,z,n,e,k,start,end;
    while(cin >> n >> e && n && e)
    {
        for(int i=0; i<=n; i++)
            for(int j=0; j<=n; j++)
                grafo.road[i][j] = 999999;
        for(int i=0; i<e; i++)
        {
            cin >> x >> y >> z;
            if(grafo.road[y][x] != 999999) {
                grafo.road[x][y] = 0;
                grafo.road[y][x] = 0;
            }
            else
                grafo.road[x][y] = z;
        }
        grafo.v = n+1;
        grafo.a = e;
        cin >> k;
        for(int i=0; i<k; i++){
            scanf("%d %d",&start, &end);
            dijkstra(start,end);
        }
        cout << endl;
    }
    return 0;
}
