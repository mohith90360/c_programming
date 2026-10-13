#include<stdio.h>
#include<string.h>
int main(){
char name[20];
printf("enter the name:");
scanf("%s",&name);
//length
int len=strlen(name);
printf("String len of name:%d\n",len);
//copy string
char  source[20]="mohi",destination[20];
strcpy(destination,source);
printf("destination=%s\n",destination);
//compare
char s1[20],s2[20];
printf("enter the string s1:");
scanf("%s",&s1);
printf("enter the string s2:");
scanf("%s",&s2);
if(strcmp(s1,s2)==0){
    printf("zero errors\n");
}
else{
    printf("error found\n");
}
//cocatenate the string
strcat(s1,s2);
printf("The concated string is:%s\n",s1);
return 0;
}
