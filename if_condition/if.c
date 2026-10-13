#include<stdio.h>
int  main(){
while(1){
int marks;
printf("Enter the marks:\n");
scanf("%d",&marks);
if(marks>100 || marks<0)
{
    printf("invalid\n");
}
else if(marks==100){
    printf("S grade\n");
}
else if(marks>75){
    printf("A grade\n");
}
else if(marks>35){
    printf("B grade\n");
}
else{
    printf("fail\n");
}

}
return 0;
}