#include<stdio.h>
#define MAX 5

int  arr[MAX];
int top=-1;

void push(int value){
    if(top==MAX-1)
    {
        printf("The stack is full:\n");
        return;
    }
    else{
    top++;
    arr[top]=value;
    printf("The value  pushed are:%d\n",value);
     return;     
}
}
void pop(int value){
    if(top==-1){
    printf("No element in stack:\n");
    return;
    }
    else{
        value=arr[top];
        top--;
        printf("value poped is:%d\n",value);
        return;
    }
}



int main(){
printf("array value are\n");
push(40);
push(30);
pop(30);
pop(40);


return 0;
}


