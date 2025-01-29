#include <stdio.h>
int main() {
 int  num1,num2,sum,difference,product,quotient;
 
 char choice;
  printf("Enter number1: ");
  scanf("%d",&num1);
  printf("Enter number2: ");
  scanf("%d",&num2);
  printf("Input a function +,-,*,/");
  
  scanf(" %c",&choice);
  
  switch(choice){
   case '+':
    sum=num1+num2;
    printf("%d is the sum",sum);
    break;
    
  case '-':
   difference=num1-num2;
   printf("%d is the difference",difference);
   break;
  case '*':
   product=num1*num2;
   printf("%d is the product",product);
   break;
  case '/':
   quotient =num1/num2;
   printf("%d is the quotient",quotient);
   break;
  default:
   printf("wrong input");
  break;
  
  }
  return 0;
  }
  
 
  
   
   
    
