#include<stdio.h>
#include<stdlib.h>
void allocate(int **p,int value)
{
   *p=malloc(sizeof(int));
   **p=value;
}



int main(){
int *ptr=NULL;
allocate(&ptr,42);
printf("the value of ptr after allocation:%d\n",*ptr);
free(ptr);
printf("the value of ptr after allocation:%d\n",*ptr);

return 0;


}