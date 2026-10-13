#include<stdio.h>
void arg(char name[]){
    printf("The name is:%s",name);
}
int main()
{
char name[40];
printf("Enetr the name:");
scanf("%s",&name);
arg(name);
return 0;
}