#include<stdio.h>
int getno(void){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    return n;       
}
int main(){
    int num;
    num=getno();
    printf("the number:%d",num);
return 0;
}