#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr=calloc(5,sizeof(int));
for(int i=0;i<5;i++)
{
printf("enter the element:");
scanf("%d",&ptr[i]);
}
for(int i=0;i<5;i++){
    printf("The value are:%d\n",ptr[i]);
    printf("address is:",(void *)ptr[i]);
}


return 0;
}

