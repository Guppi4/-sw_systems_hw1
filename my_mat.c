#include"my_mat.h"
#include<stdio.h>
#define INFINITY 1000000


int dijkstraifpath(int G[MAX][MAX],int startnode,int endnode)
{
 if(startnode==endnode){ //if start node == endnode
     return 1000000;
 }
int cost[MAX][MAX],distance[MAX];
int visited[MAX],count,m,nextnode,i,j;

for(i=0;i<MAX;i++)
for(j=0;j<MAX;j++)
if(G[i][j]==0)
cost[i][j]=INFINITY;
else
cost[i][j]=G[i][j];

for(i=0;i<MAX;i++)
{
distance[i]=cost[startnode][i];

visited[i]=0;
}
distance[startnode]=0;
visited[startnode]=1;
count=1;
while(count<MAX-1)
{
m=INFINITY;
//nextnode gives the node at minimum distanc
for(i=0;i<MAX;i++)
if(distance[i]<m&&!visited[i])
{
m=distance[i];
nextnode=i;
}
//check if a better path exists through nextnode
visited[nextnode]=1;
for(i=0;i<MAX;i++)
if(!visited[i])
if(m+cost[nextnode][i]<distance[i])
{
distance[i]=m+cost[nextnode][i];

}
count++;
}
 
//print dist of end node

       return distance[endnode];
}



