#include<stdio.h>    
// int main()    
// {    
//  int n1=0,n2=1,n3,i,number;    
//  printf("Enter the number of elements:");    
//  scanf("%d",&number);    
//  printf("\n%d %d",n1,n2);//printing 0 and 1    
//  for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
//  {    
//   n3=n1+n2;    
//   printf(" %d",n3);    
//   n1=n2;    
//   n2=n3;    
//  }  
//   return 0;  
//  } 
  //fibonansi series without recursion  
// void printFibonacci(int n){    
//     static int n1=0,n2=1,n3; //declaring static variables   
//     if(n>0){    
//          n3 = n1 + n2;    
//          n1 = n2;    
//          n2 = n3;    
//          printf("%d ",n3);    
//          printFibonacci(n-1);//calling the function itself    
//     }    
// }    
int main(){  // main function  
    // int n;    
    // printf("Enter the number of elements: ");    
    // scanf("%d",&n);    
    // printf("Fibonacci Series: ");    
    // printf("%d %d ",0,1);    
    // printFibonacci(n-2);//n-2 because 2 numbers are already printed    
    int i,n,a=0,b=1,c;
    printf("enter anumber");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      printf("%d\n",a);
      c=a+b;
      a=b;
      b=c;
    }
  return 0;  
 }       