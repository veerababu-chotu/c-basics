#include<stdio.h>
void main()
{
	int telugu,english,maths,totalmarks,percentage;
	printf("telugu marks:");
	scanf("%d",&telugu);
	printf("english marks:");
	scanf("%d",&english);
	printf("maths marks:");
	scanf("%d",&maths);
	totalmarks=telugu+english+maths;
	percentage=totalmarks/3;
    printf("total marks: %d\n",totalmarks);
    printf("total percentage: %d",percentage);
	
	
}
