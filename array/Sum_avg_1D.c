#include<stdio.h>
int main(){
int arr[5];int sum=0, i;float avg;
printf("enter the array value:");
for( i=0;i<5;i++){
    scanf("%d ",&arr[i]);
    sum+=arr[i];
}
printf("Array values are:");
for(i=0;i<5;i++){
    printf("%d ",arr[i]);
}
printf("sum is: %d",sum);
avg=sum/5;
printf(" avg: %.2f",avg);
return 0;
}