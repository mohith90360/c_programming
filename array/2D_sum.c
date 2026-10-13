#include<stdio.h>
int main(){
int m,n;int i,j;
printf("enter the value of m*n:");
scanf("%d %d",&m,&n);
int a[m][n];
printf("enter the array values:");
for (int i=0;i<m;i++){
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<m;i++){
    int sum_r=0;
for(j=0;j<n;j++)
{
   sum_r+=a[i][j];
}
  printf(" row sum: %d \n",sum_r);

}
for(j=0;j<n;j++){
    int sum_c=0;
for(i=0;i<m;i++){
    sum_c+=a[i][j];
}
printf("col sum:%d\n",sum_c);

}

return 0;
}