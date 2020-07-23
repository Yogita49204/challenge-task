#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks of the student:");
	scanf("%d",&marks);
	if(marks>=85)
	{
		printf("the student has got GRADE A");
	}
	else if(marks>=70)
	{
		printf("the student has got GRADE B");
	}
	else if(marks>=55)
	{
		printf("the student has got GRADE C");
	}
	else if(marks>=40)
	{
		printf("the student has got GRADE D");
		
	}
	else
	printf("the student has got GRADE F");
	return 0;
}
