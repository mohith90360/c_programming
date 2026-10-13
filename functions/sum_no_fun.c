#include<stdio.h>
int sumdig(int n){
    if (n==0){
        return 0;
    }
    else{
        return (n%10)+sumdig(n/10);        
        }
    }

int main(){
int n,res;
while(1){
printf("enter the value:");
scanf("%d",&n);
res=sumdig(n);
printf("the sum is: %d\n",res);
}
return 0;
}
