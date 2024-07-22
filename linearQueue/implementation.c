#include<stdio.h>

int main(){
    int num,front=-1,rear=-1,maxsize=10;
    int queue[20];
printf("\nenter the number to insert:");
scanf("%d",&num);
if(rear==maxsize-1){
        printf("\nQueue is full");
    }
    rear++;
    queue[rear]=num;
    if (front =-1)
    front=0;
    for(int i=0;i<maxsize;i++){
printf("\nThe number is :\n %d",queue[i]);
    }
return 0;
}