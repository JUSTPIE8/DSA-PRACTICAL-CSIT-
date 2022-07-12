#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,j; 
    printf("Enter elements in an array : ");
    scanf("%d",&n);
    int *ptr=(int *)(calloc(n,sizeof(int )));
printf("Enter elements in an array : ");
for(i=0;i<n;i++){
    scanf("%d",ptr+i);
   
}
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(*(ptr+j+1)<*(ptr+j)){
            int temp=*(ptr+j+1);
            ptr[j+1]=*(ptr+j);
            ptr[j]=temp;
        }
    }
}
printf("The sorted data item is in : ");
for(i=0;i<n;i++){
    printf("%d\t",*(ptr+i));
   
}
}

