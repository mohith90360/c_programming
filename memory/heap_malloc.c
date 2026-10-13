#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr=malloc(5*sizeof(int));
for(int i=0;i<5;i++){
    printf("enter the array value:\n");
    scanf("%d",&ptr[i]);
}
printf("array elements are\n");

for(int i=0;i<5;i++){
    printf("value:%d:",ptr[i]);
        printf("address:%p\n",(void *)&ptr[i]);

}
free(ptr);
return 0;
}