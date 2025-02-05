#include <stdio.h>
 int main () {
  int i,n,key,flag;
  flag=0;

   printf("Enter the number of elements : ");
   scanf("%d" ,&n);
    int num[n];
   for (i=0;i<n;i++){
    printf("\nEnter the elements :");
    scanf("%d",&num[i]);
    
   }
   printf("Enter the number ");
   scanf("%d",&key);
    for (i=0;i<n;i++){
     if( num[i] ==key){
     printf("\n The %d element is presnt at %d position",key,i+1);
     flag=1;
     break;
    
    }} 
    if(flag==0){
     printf("\n The %d element is not present ",key);
    
    }
    
    return 0;
    }
 
