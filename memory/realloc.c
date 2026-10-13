#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr=malloc(3*sizeof(int));
    arr[0]=2;arr[1]=3;arr[2]=4;
for(int i=0;i<3 ;i++)
{
        printf("%d ",arr[i]);
        printf("%p ",(void*)&arr[i]);
}
int *temp=realloc(arr,50*sizeof(int));
if(temp!=NULL){
    printf("Allocation successful:\n");
    arr=temp;
    arr[3]=5;arr[4]=6;
}
for(int i=0;i<5;i++)
{
        printf("%d \n",arr[i]);
}
free(arr);
    return 0;
}