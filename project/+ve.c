#include<stdio.h>
main()
{
	int age;
	printf("\n enter age= ");
	scanf("%d",&age);
	if(age>18)
	{
		printf("\nperson is eligible for voting");
		
	}
	else
	{
		printf("\n person is not elibile for voting");
	}
}