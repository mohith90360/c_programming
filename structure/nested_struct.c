#include<stdio.h>
struct address{
    char city[30];
    int pincode;
};
struct person{
char name[30];
int age;
struct address add;
};
int main(){
struct person p;
while(1){
printf("enter the name:\n");
scanf(" %[^\n]",p.name);
printf("enter the age:\n");
scanf("%d",&p.age);
printf("enter the city address : \n");
scanf(" %[^\n]",p.add.city);
printf("enter the pincode:\n");
scanf("%d",&p.add.pincode);
printf("enter the name:%s\n",p.name);
printf("enter the age:%d\n",p.age);
printf("enter the address:%s \n",p.add.city);
printf("enter the citycode:%d \n",p.add.pincode);
}
return 0;

}





