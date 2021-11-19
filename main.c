#include"my_mat.h"
#include<stdio.h>

#define MAX 10
#define INFINITY 1000000
int main()//uy
{
char choice;
int G[MAX][MAX],i,j,s,f,s1,f1;
do{
        
        scanf(" %c", &choice);
        switch (choice)
        {
        case 'A':
         
         for(i=0;i<MAX;i++)
         for(j=0;j<MAX;j++)
         scanf("%d",&G[i][j]); 
            
            break;     
        case 'B':
		
            scanf("%d %d",&s,&f)	;
            if(dijkstraifpath(G,s,f)!=INFINITY){
               
               printf("True"); 
            }
            else{
               printf("False"); 
            }
            break;	 
        
        case 'C': 
            
             scanf("%d %d",&s1,&f1);
             if(dijkstraifpath(G,s1,f1)!=INFINITY){
               
               printf("%d",dijkstraifpath(G,s,f)); 
            }
            else{
               printf("%d",-1); 
            }   
            break;
        
        default:
            break;
       
        }
    }while (choice != 'D');   
return 0;
}