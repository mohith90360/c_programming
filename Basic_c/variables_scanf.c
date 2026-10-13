#include<stdio.h>
int main()
{
    char name[20];
    int age;
    printf("Enter the name\n");
    scanf("%s",name);
    printf("Enter the age\n");
    scanf("%d",&age);
    printf("The person name is %s,the age is:%d\n ",name,age);
    return 0;
}