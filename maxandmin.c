
 #include <stdio.h>
int main (){
int i,num,max,min;
printf("Enter the number of elements ");
scanf("%d",&num);
int number[num];
for(i=0;i<num;i++){
printf("Enter the number:");
scanf("%d",&number[i]);
}
max=number[0];
min=number[0];
for(i=0;i<num;i++){
if(number[i]>max){
max=number[i];

}
if(number[i]<min){
min=number[i];
    
}
}
printf("\n The largest number =%d",max);
printf("\n The smallest number = %d",min);
return 0;

}

