#include<stdio.h>
int swap(int *ptr1,int *ptr2){
        
        int temp=*ptr1;
            *ptr1=*ptr2;
            *ptr2=temp;
}

int main(){
    int x,y;
    printf("enter the value of x and y:");
    scanf("%d%d",&x,&y);
    printf("Before swapping value of x:%d and y:%d\n",x,y);
    swap(&x,&y);
    printf("After swapping value of x:%d and y:%d\n",x,y);
    return 0;
}