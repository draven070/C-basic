//program to calculate matrix
#include<stdio.h>
  int main()
  {
    int matrix[50][50],i,j,m,n;
    printf("Enter the number of rows:\t");
    scanf("%d",&m);
    printf("Enter the number of columns:\t");
    scanf("%d",&n);
    
    //inputing the data
   
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
       printf("Enter data in [%d][%d]: ", i, j);
       scanf("%d", &matrix[i][j]);
      }
    }
    
    //for displaying result
    
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%d\t",matrix[i][j]);
      }
      printf("\n");
    }
    return 0;
  }
    
