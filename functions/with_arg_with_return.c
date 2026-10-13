#include<stdio.h>
int add(int a,int b){
    int res;
    res=a+b;
    return res;

}


int main(){int res;
    int a,b;
    printf("enter the value for a & b:");
    scanf("%d %d",&a, &b);
    res=add(a,b);
    printf(" the added value is :%d",res);
     return 0;
}