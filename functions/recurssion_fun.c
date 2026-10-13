#include<stdio.h>
int fact(int n){
    int res;
    if(n==0 || n==1){
        return 1;
}
else{
    res=fact(n)*fact(n-1);
    return res;
}

}
int main(){
    int n,res;
    printf("enter the  value:");
    scanf("%d",&n);
    res=fact(n);
    printf("fact :%d",res);
 return 0;

}