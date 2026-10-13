#include<stdio.h>


void sorted(int array[],int size){
    for(int i=0;i<size;i++)
      {for(int j=i+1;j<size;j++){
        if(array[i]>array[j])
        {   int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
      }
}}
int binarysearch(int array[],int n,int target){int high=n-1;int low=0;


while(low<=high){
int mid=(low+high)/2;
if(array[mid]==target)
{return mid;
}
if(target<array[mid])
{
    high=mid-1;
}
if(target>array[mid])
{
    low=mid+1;
}
}
return -1;
}
int main(){
int n;

printf("enter n value:\n");
scanf("%d",&n);
int arr[n];
printf("enter the array element:");
for(int i=0;i<n;i++){        
    scanf("%d",&arr[i]);
}
sorted(arr,n);

printf(" the array element:\n");
for(int i=0;i<n;i++){        
    printf("%d ",arr[i]);
}
int target;
printf("enter the array targeted element:");  
scanf("%d",&target);
int result=binarysearch(arr,n,target);
if(result==-1){
    printf("not found\n:");
}
else{
    printf("found at index %d",result);
}
return 0;



}