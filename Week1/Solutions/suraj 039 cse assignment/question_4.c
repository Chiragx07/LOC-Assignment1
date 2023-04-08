//assignment question 4(write a  C program to enter two numbers and perform all arithmetic operation using switch case.)
#include<stdio.h>
int main()
{
  float num1,num2;
  char op;

  printf("enter two numbers and the operator:");
  scanf("%d %d %c",&num1,&num2,&op);
 
   switch(op)
   {
    case '+':
      printf("sum of two num is:%f",num1+num2);
      break;
    case '-':
      printf("subtracton is:%f",num1+num2);
      break;
    case '*':
      printf("multiplication is:%f",num1*num2);
      break;
    case '/':
      printf("division is :%f",num1/num2);
      break;
    default:
    printf("invalid");
   }    
      return 0;

}
