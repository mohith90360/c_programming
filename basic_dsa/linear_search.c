#include<stdio.h>
int main(){
int target;
int n;int count=0;
printf("enter the value of n:\n");
scanf("%d",&n);
int found=0;

int arr[n];
printf("enter the array elements:\n");
for(int i=0;i<n;i++){
scanf(" %d",&arr[i]);
}
printf("enter the target:\n");
scanf("%d",&target);
printf("the targeted value is:%d found at\n",target);
for(int i=0;i<n;i++){
if(arr[i]==target){
found=1;
count++;
printf(" %d",i);}
}

if(!found){
    {printf("not found\n");}

}
printf("repeated:%d",count);
return 0;   
}