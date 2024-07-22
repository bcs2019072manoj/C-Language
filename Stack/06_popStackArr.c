#include <stdio.h>
#include <stdlib.h>

int stack[10];
    int max_size=10;
    int top;

//function for push operation
void push(int item){
    if(top==max_size-1)
    printf("stack is full can't perform push operation:\n");
    else
    top++;
    stack[top]=item;
    printf("pushed %d\n",stack[top]);
}
//function for pop operation
void pop(){
    if(top==-1)
    printf("stack is empty can't perform pop operation:\n");
    else{
    printf("poped %d\n",stack[top]);
    top--;
    }
}

int display(){
    int temp=stack[top];
    while(temp>0)
    printf("\nthe stack elements are :%d\t",stack[temp]);
    temp--;
   return 0; 
}

//function for display stack elements
// void display(stack){
//     printf("Stack elements are:\n");
//     for(int i=0;i<max_size;i++){
//         printf("%d\t",stack[top]);

//     }
//}
int main()
{
    push(4);
    push(5);
    push(3);
    push(7);
    push(9); 
    display();
    printf("Stack has been created successfully :\n");
    return 0;
}