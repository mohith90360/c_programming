#include<stdio.h>
int main(){
    while(1){int choice;
    printf(" Enter the choice::\n 1.Drinks\n  2.Snacks\n 3.meals\n   15.Surprise\n");
    scanf("%d",&choice);
    switch(choice){
        case 1 :
                printf("Drinks successful\n");break;
        case 2 :
                printf("snacks successful\n");break;
        case 3 :  
               printf("meals successful\n");break;
        case 15 :
                printf("Surprise dropped\n");break;
        default:
                printf("invalid choice\n");

    }
}
 return 0;
}