#include<stdio.h>
void readFile(FILE *fp){
int num;
while(fscanf(fp,"%d",&num)==1){
printf("%d\t",num);
}
fclose(fp);
}
int main(){
FILE *fp1,*fp2,*fp3;
fp1=fopen("num.txt","r");
fp2=fopen("odd1.txt","w");
fp3=fopen("even1.txt","w");

int num;
while(fscanf(fp1,"%d",&num)==1){
if(num%2==0){
fprintf(fp3,"%d\t",num);
}else{
fprintf(fp2,"%d\t",num);
}
}
fclose(fp1);
fclose(fp2);
fclose(fp3);
printf("\nThe input text file contents :");
fp1=fopen("num.txt","r");
readFile(fp1);
printf("\nThe odd number file contents :");
fp2=fopen("odd1.txt","r");
readFile(fp2);
printf("\nThe even number file contents:");
fp3=fopen("even1.txt","r");
readFile(fp3);
return 0;
}
