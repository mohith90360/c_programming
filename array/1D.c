#include<stdio.h>
int main(){
int arr[5];
printf("enter the array values\n");
for(int i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
}

printf("entered valuees are\n");
for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
}
return 0;
}