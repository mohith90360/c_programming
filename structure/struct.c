#include<stdio.h>
#include<string.h>
struct book{
    char title[20];
    char author[20];
    float price;
    int pages;
};
int main()
{
    struct book b1;
    printf("enter the title:\n");
    scanf("%[^\n]",b1.title);
    strcpy(b1.author,"mohit");   //without scanf to initialise the value to the author //
    printf("enter the price:\n");
    scanf("%f",&b1.price);
    printf("enter the pages:\n");
    scanf("%d",&b1.pages);

    printf("-----book deteails are:------\n");
    printf("title is:%s\n",b1.title);
    printf("author is:%s\n",b1.author);
    printf("price is:%.2f\n",b1.price);
    printf("pages is:%d\n",b1.pages);
    return 0;
}

