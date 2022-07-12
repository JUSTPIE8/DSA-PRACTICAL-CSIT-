#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,sum=0; 
    printf("Enter nos elements in an array : ");
    scanf("%d",&n);
    int *ptr=(int *)(malloc(n*sizeof(int )));
printf("Enter elements in an array : ");
for(i=0;i<n;i++){
    scanf("%d",ptr+i);
   
}
printf("The elements in array are : ");
for(i=0;i<n;i++){
printf("%d\t",*(ptr+i));
 sum=sum+*(ptr+i);
}
printf("The sum is %d",sum);
free(ptr);
}
