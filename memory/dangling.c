#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr=malloc(sizeof(int));
*ptr=224;

printf("Before freeing the pointer\n",*ptr);
printf("ptr value:%d\n",*ptr);
printf("ptr address:%p\n",&ptr);
free(ptr);
printf("After freeing\n");
printf("ptr value:%d\n",*ptr);
printf("ptr address:%p\n",&ptr);
return 0;

}