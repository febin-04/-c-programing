#include <stdio.h>
int main (){
int i,j,num;
printf("Enter the number of elements ");
scanf("%d",&num);
int number[num];
for(i=0;i<num;i++){
printf("Enter the number:");
scanf("%d",&number[i]);
}
for(i=0;i<num;i++){
for (j=0;j<num-1;j++){
if (number[j]>number[j+1]){
int temp;
temp=number[j];
number[j]=number[j+1];
number[j+1]=temp;
}
}
}
for(i=0;i<num;i++){
printf("%d\t",number[i]);
}
return 0;
}

