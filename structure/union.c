#include<stdio.h>
struct book{
    char name[20];
    float price;
    int page;
};
union book1{
    char name[20];
    float price;
    int page;
};
int main(){
struct book s;
union book1 u;
printf("the size of book:%lu \n",sizeof(s));
printf("the size of book1:%lu\n",sizeof(u));
printf("enter the name of the author:\n");
scanf(" %[^\n]",s.name);
printf("enter the price:\n");
scanf(" %f",&s.price);
printf("enter the page:\n");
scanf(" %d",&s.page);



printf("enter the name of the author:\n");
scanf(" %[^\n]",u.name);
printf("enter the price:\n");
scanf(" %f",&u.price);
printf("enter the page:\n");
scanf(" %d",&u.page);


return 0;
}

