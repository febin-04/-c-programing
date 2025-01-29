#include <stdio.h>
 int main() {
  int num,result;
  result=1;
  printf("Enter your number ");
  scanf("%d",&num);
  while (num>1){
   result=result*num;
   num--;
  }
  printf("\n factorial is %d",result);
  return 0;
  }
  
  
  
  
