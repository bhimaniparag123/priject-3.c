#include<stdio.h>

//digital counter
main()

{
	int num,cou = 0;
	
	printf("Enter a number:  ");
	scanf("%d",&num);
	
	while(num !=0)
	{
		num/= 10;
		cou++;
	}
	printf("Total number of digits: %d\n",cou);
}