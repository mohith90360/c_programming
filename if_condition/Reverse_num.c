#include<stdio.h>
int main(){
int num,reversed=0,lastdigit;
printf("Ente the number:\n");
scanf("%d",&num);
while(num!=0)
{
    lastdigit=num%10;
    reversed=reversed*10+lastdigit;
    num=num/10;

}
printf("Reversed number is: %d",reversed);
return 0;
}