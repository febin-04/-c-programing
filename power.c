#include<stdio.h>
int power(int base,int exponent){
if (exponent==0){
return 1;
}else{
return base*power(base,exponent-1);
}
}
int main(){
int base,exponent;
printf("Enter the exponent :");
scanf("%d",&exponent);
printf("Enter the base :");
scanf("%d",&base);
int result=power(base,exponent);
printf(" %d raised to %d is %d",base,exponent,result);
return 0;
}



