#include<stdio.h>
#include<stdlib.h>
int main(){
    int max,min,n,i,sum=0; 
    
    printf("Enter elements in an array : ");
    scanf("%d",&n);
	int *ptr=(int *)(calloc(n,sizeof(int )));
printf("Enter elements in an array : ");
for(i=0;i<n;i++){
    scanf("%d",ptr+i);
   
}

printf("The elements in array are : ");
for(i=0;i<n;i++){
    sum=sum+*(ptr+i);
    printf("%d\t",*(ptr+i));
}
//assingning first elements of array  in max and min
max=*(ptr+0);
min=*(ptr+0);
for(i=1;i<n;i++){
    if(*(ptr+i)>max){
        max=*(ptr+i);
    }
    if(*(ptr+i)<min){
        min=*(ptr+i);
    }
   
}

printf("max =%d and min=%d and sum=%d",max,min,sum);
free(ptr);
}
