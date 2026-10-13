#include<stdio.h>
int main()
{
    int m,n;
    printf("Take m and n:\n");
scanf("%d %d",&m,&n);
    int a[m][n];

printf("enter the [m*n] matrix\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    scanf("%d",&a[i][j]);
     }
}
printf("entered values of %d %d matrix\n",m,n);
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
{
    printf(" %d ",a[i][j]);
}
printf("\n");
}
return 0;
}