#include"my_mat.h"
#include<stdio.h>
#define INFINITY 1000000


int dijkstraifpath(int G[MAX][MAX],int startnode,int endnode)
{
 
int cost[MAX][MAX],distance[MAX];
int visited[MAX],count,mindistance,nextnode,i,j;

for(i=0;i<MAX;i++)
for(j=0;j<MAX;j++)
if(G[i][j]==0)
cost[i][j]=INFINITY;
else
cost[i][j]=G[i][j];
//initialize pred[],distance[] and visited[]
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
mindistance=INFINITY;
//nextnode gives the node at minimum distance
for(i=0;i<MAX;i++)
if(distance[i]<mindistance&&!visited[i])
{
mindistance=distance[i];
nextnode=i;
}
//check if a better path exists through nextnode
visited[nextnode]=1;
for(i=0;i<MAX;i++)
if(!visited[i])
if(mindistance+cost[nextnode][i]<distance[i])
{
distance[i]=mindistance+cost[nextnode][i];

}
count++;
}
 
//print the path and distance of each node

       return distance[endnode];
}



