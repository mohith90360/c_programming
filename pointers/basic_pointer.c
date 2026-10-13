#include<stdio.h>
int main(){
    int *ptr;int num=10;
    ptr=&num;
    printf("ptr:%d\n",ptr);
    printf("&ptr:%d\n",&ptr);
    printf("num:%d\n",num);
    printf("&num:%d\n",&num);
    printf("*ptr:%d\n",*ptr);

return 0;


}