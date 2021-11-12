// mints converts in to hours :
#include<stdio.h>
void main()
{
	int minits,formulae1,formulae2;
	printf("enter a time in minits");
	scanf("%d",&minits);
	formulae1=minits/60;
	formulae2=minits%60; 
	printf("the given time is :%d hours and %d minits",formulae1,formulae2);
}

