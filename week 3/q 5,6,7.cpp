//Answer of a is : ii) k is a pointer to a pointer to a pointer to a pointer to a char is incorrect syntax since it has more asterisks than pointers to char.

//Answer of b : 
#include<stdio.h>
 int main()
{
int k = 5;
int *p = &k;
int **m = &p;
**m = 6;
printf("%d\n", k);
return 0;
}
//Answer 6 The correct statement about structures in a C program is a. Structure elements can be initialized at the time of declaration.
//Answer 7 The size of a C structure is the sum of the sizes of all its member variables, possibly with some padding added by the compiler for alignment purposes
