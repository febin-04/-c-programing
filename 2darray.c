#include<stdio.h>
int main(){
  int row,col,i,j;
  printf("\n Enter the no of row and column ");
  scanf("%d%d",&row,&col);
  int matrix[row][col];
  for(i=0;i<row;i++){
      for(j=0;j<col;j++){
      printf("Enter the elements at position %d%d ",i+1,j+1);
      scanf("%d",&matrix[i][j]);
  }
  }
  printf("\n The matrix is :\n");
  for(i=0;i<row;i++){
   for(j=0;j<col;j++){
     printf("%d\t",matrix[i][j]);
   }
   printf("\n");
    }
  return 0;
  }
  
  
  
  
 

