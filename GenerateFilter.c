#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int **createFilter(int rows,int columns);
    int r,c;
    int **myFilter;
    printf("%s","Enter the filter size");
    scanf("%d",&r);
    c = r;
    
    myFilter = createFilter(r,c);
   for(int i=0;i<r;i++)
    {
    for(int j=0;j<c;j++)
    {
      printf("%d  ",myFilter[i][j]);
    }
     printf("\n");
    }
   
}
 
int **createFilter(int rows,int columns)
{
   int **customFilter = (int **)malloc(rows * sizeof(int *));
  
    for(int i=0;i<rows;i++)
    {
        customFilter[i] = (int *)malloc(columns * sizeof(int));
                
    }   
    int filterCenter = (floor(rows/2));
    printf("%d\n",filterCenter);
    
    for(int i=0;i<rows;i++)
    {
       for(int j=0;j<columns;j++)
       {
          if((i== filterCenter) && (j == filterCenter))
             customFilter[i][j] = 200;
          else if((i == filterCenter) || (j == filterCenter))
             customFilter[i][j] = -1;
          else
             customFilter[i][j] = 0;
         
       }
    }
    
 
  
    
   return customFilter;
  
}