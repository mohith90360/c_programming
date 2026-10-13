#include<stdio.h>
struct student{
char name[20];
int marks[5];
};
int main(){
struct student s1;
printf("enter the name:\n");
scanf(" %[^\n]",s1.name);
printf("The marks of the student is:");
for(int i=0;i<5;i++){
    scanf("%d",&s1.marks[i]);
}
printf("The marks of the student is:%s\n",s1.name);
for(int i=0;i<5;i++){
    printf("%d\n",s1.marks[i]);
}
return 0;
}
