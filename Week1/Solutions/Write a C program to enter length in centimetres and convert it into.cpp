#include<stdio.h>
#include<conio.h>
int main()
{
	float length,tocm,tom,tokm;
	printf("enter in cm:");
	scanf("%f",&tocm);
	tom= (tocm/100);
	tokm = (tom/1000);
	printf("%f in meters \n",tom);
	printf("%f in kilometers \n", tokm);
	return 0;
}
