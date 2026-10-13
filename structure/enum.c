#include<stdio.h>
typedef enum {monday=1,tuesday,wednesday,thursday,friday,saturday,sunday} day;
int main(){
    int choice;
    day today;
    printf("enter choice mon=1....sun=6:\n");
    scanf("%d",&choice);
    today=choice;
    if(choice<monday ||choice>sunday){
       printf("Invalid day number!\n");
        return 1;

    }
    else{
    switch(today){
    case sunday:
    case saturday:
                  printf("weekend\n");break;
    default:
            printf("weekday\n");break;
    }
}return 0;
    
}