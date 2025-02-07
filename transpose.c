/*
program to find the transpose of a matrices
Date: 7/2/25
Version 1.0

*/

#include<stdio.h>
int main(){
  int row,col,i,j;
  printf("\n Enter the no of row and column ");
  scanf("%d%d",&row,&col);
  int  m1[row][col],m2[col][row];
  printf("\n Enter the  matrix");
  for(i=0;i<row;i++){
   for(j=0;j<col;j++){
    scanf("%d",&m1[i][j]);
    
    }
    }
    for(i=0;i<row;i++){
    for(j=0;j<col;j++){
    printf("%d\t",m1[i][j]);
    }
    printf("\n");
    }
    for(i=0;i<row;i++){
    for(j=0;j<col;j++){
    m2[j][i]=m1[i][j];
    }
    }

  
printf("\nThe transposed matrix is:\n");
     for(i=0;i<col;i++){
   for(j=0;j<row;j++){
   printf("%d\t",m2[i][j]);
   }
   printf("\n");
    }
    
    return 0;
    }
