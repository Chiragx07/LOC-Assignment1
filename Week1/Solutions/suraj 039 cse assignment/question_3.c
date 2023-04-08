//assignment question 3(write a program that takes a number as input and prints the sum of its digits using a do-while loop.)
#include<stdio.h>
int main()
{    
    int number,sum;
    printf("enter a number");
    scanf("%d",&number);
    
    sum=0;
    do{
        sum+=number%10;
        number/=10;
      }
    while(number>0);{
         printf("%d\n",sum);                 
      }
         return 0;
}