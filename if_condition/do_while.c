#include<stdio.h>
int main(){int num;
     int secret=5,attempt=0;
do {
   
    printf("Enter the num:");
    scanf("%d",&num);
    attempt++;
    if(num!=secret){
        printf("The number is invalid\n");
    }
    }while(num!=secret && attempt<3);
    if (num==secret)
{printf("Correct value guessed\n");
}
else{
    printf("The value entered is wrong and attempts got over");
}
    return 0;
}
