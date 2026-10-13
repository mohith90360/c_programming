#include<stdio.h>
int main(){
    int num=5;
    int *ptr=&num;
    int **pptr=&ptr;

    printf("num:%d\n",num);
    printf("&num:%d\n",&num);

    printf("*ptr:%d\n",*ptr);
    printf("ptr:%d\n",ptr);
    printf("ptr:%d\n",&ptr);
    
    printf("**pptr:%d\n",**pptr);
    printf("pptr:%d\n",pptr);



return 0;
}