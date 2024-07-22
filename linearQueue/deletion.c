#include<stdio.h>
int main(){
    int d,num,front=0,rear=9,maxsize=10;
    int queue[10]={1,2,3,4,5,6,7,8,9};
printf("\nenter the number to delete:");
scanf("%d",&d);
if(front == -1)
{
printf("\nQueue is empty (Queue underflow)");
}
d=queue[front];
printf("\nDeleted element is : %d",d);
front++;
if(front>rear)
front=rear=-1;
return 0;
}