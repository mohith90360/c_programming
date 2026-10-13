#include<stdio.h>
#define MAX 4
int front=-1;int rear=-1;
int arr[MAX];
void push(int value){
    if(rear==MAX-1){
        printf("The queue is full\n");
        return;
    }
if(front==-1 && rear==-1){
    front++;rear++;
    arr[rear]=value;
    printf("The value pushed is :%d\n",arr[rear]);
    return;
}
else{
    rear++;
    arr[rear]=value;
       printf("The value pushed is :%d\n",arr[rear]);

    return;
}
}
void pop(int value){
    if(front==-1&& rear==-1 ||front>rear)
{
    printf("The queue is empty\n");
    return;
}
else{
    value=arr[front];
    front++;
    printf("The value popped is :%d\n",value);
}
}
int main(){
    push(20);
    push(30);
    push(34);
    push(4);
    push(10);
    pop(10);
    pop(4);
    pop(34);
    pop(30);
    pop(20);
    pop(20);
return 0;
}