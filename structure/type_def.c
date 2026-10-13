#include<stdio.h>
typedef struct{
    char name[20];
    int age;
}student;




int main(){
    student s1;
    printf("enter the name:\n");
    scanf("%[^\n]",s1.name);
    printf("enter the age:\n");
    scanf("%d",&s1.age);

printf("The name is:%s\n",s1.name);
printf("The age is:%d\n",s1.age);
return 0;
}