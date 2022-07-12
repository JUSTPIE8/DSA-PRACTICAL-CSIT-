#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	int *ptr=(int *)(malloc(5*sizeof(int)));
	
	
	
	if(ptr==NULL){
		printf("Memory not allocated : ");
		exit(0);
	}
	printf("Enter 5 elements in array : ");

	for(i=0;i<5;i++){
		scanf("%d",ptr+i);
	}
	//using realloc
	ptr=realloc(ptr,10*sizeof(int));
	//additional data
	printf("Enter 5  additional data elements ");
	for(i=5;i<10;i++){
		scanf("%d",ptr+i);	
	}
	printf("all data : ");
		for(i=0;i<10;i++){
		printf("%d\n",ptr[i]);	
	}
	free(ptr);//for deallocating the memory
}
