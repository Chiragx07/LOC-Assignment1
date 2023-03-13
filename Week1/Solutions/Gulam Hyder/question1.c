#include<stdio.h>
int main()
{
    int a;
    for (int a=1;a<=100;a++){
     
     if(a%3==0 && a%5==0)
     {
        printf("\nfizzbuzz\n");
     }
     else if(a%5==0)
     {
        printf("\nbuzz\n");
     }
     else if(a%3==0 )
     {
        printf("\nfizz\n");
     }
     else {
        printf("%d\n",a);
     }
    }
     return 0;
}