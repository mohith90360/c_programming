#include<stdio.h>
void array(int *arr,int size){
for(int i=0;i<size;i++)
{
    printf("enter the value for index %d:\n",i); 
    scanf("%d",&arr[i]);
}

   for(int i=0;i<size;i++){
    printf(" the values are:%d\n",arr[i]);
    }
}
int main()
{
int num[4];
printf("address of the array: %p\n",num);
array(num,4);
return 0;
}

