#include<stdio.h>
#include<stdlib.h>

void store(int arr[],int pos,int element);
void display(int arr[]);
void retrive(int arr[],int pos);
int main(){
int arr[5]={1,2,4,5,6};
store(arr,3,5454);
display(arr);
retrive(arr,1);
}
void store(int arr[],int pos,int element){
    if(pos<0||pos>4){
        printf("pos out of bounds");
        exit(0);
    }
    arr[pos]=element;
    printf("element inserted sucessfully\n");
}
void display(int arr[]){
    printf("The elements in array are : ");
    for (int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }}
void retrive(int arr[],int pos){
    if(pos<0||pos>4){
        printf("pos out of bounds");
        exit(0);
    }
    printf("Element at pos %d is %d",pos,arr[pos]);
}
