#include<stdio.h>
#include<conio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5;
	float total,average,percent;
	printf("enter marks:");
	scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
	total=sub1+sub2+sub3+sub4+sub5;
	average=((total)/5);
	percent = (total / 500.0) * 100;
	printf("total marks:%f \n",total);
	printf("average:%f \n",average);
	printf("%f\n",percent);
	return 0;
}
