#include<stdio.h>
int main(){
  int row,col,i,j;
  printf("\n Enter the no of row and column ");
  scanf("%d%d",&row,&col);
  int  m1[row][col],m2[row][col],m3[row][col];
  printf("\n Enter the first matrix");
  for(i=0;i<row;i++){
   for(j=0;j<col;j++){
    scanf("%d",&m1[i][j]);
    
    }
    }
    
  printf("\n Enter the second matrix");
  for(i=0;i<row;i++){
   for(j=0;j<col;j++){
    scanf("%d",&m2[i][j]);
       
    }
    }
    
    for(i=0;i<row;i++){
   for(j=0;j<col;j++){
    m3[i][j]=m1[i][j]+m2[i][j];
    }
    }
    printf("The sum of the two matrix is ")
     for(i=0;i<row;i++){
   for(j=0;j<col;j++){
   printf("%d\t",m3[i][j]);
   }
   printf("\n");
    }
    
    return 0;
    }
