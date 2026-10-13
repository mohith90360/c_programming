#include<stdio.h>
struct student{
    char name[20];
    int age;
    int marks[5];
};
int main(){
struct student s[2];
for(int i=0;i<2;i++){
    printf("enter the name of student %d:\n",(i+1));
    scanf(" %[^\n]", s[i].name);
    printf("enter the age of student %d:\n",(i+1));
    scanf("%d",&s[i].age);   
}

for(int i=0;i<2;i++){
    printf("the student %d\n",(i+1));
        printf(" name is:%s \n ",s[i].name);
    printf(" age is:%d\n",s[i].age);
}

for(int i=0;i<2;i++){
    printf("the student %d marks\n",(i+1));
    for(int j=0;j<5;j++){
    printf("enter the subject %d marks\n",(j+1));
    scanf("%d",&s[i].marks[j]);
}
}

for(int i=0;i<2;i++){
    printf("the student %d marks\n",(i+1));
    for(int j=0;j<5;j++){
    printf(" subject %d marks:%d\n",(j+1),s[i].marks[j]);    }
}

return 0;

}
