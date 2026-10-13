#include<stdio.h>
int main(){int n,i,sum=0;
    printf("Enter the values to be printed:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("%d ",i);
        sum+=i;
    }
    printf("\nSum is: %d",sum);


    return 0;
}