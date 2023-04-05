#include<stdio.h>
int sum(int n[])
{
	int i,total=0;
	for(i=0;i<=4;i++)
	{
		total=total+n[i];
	}
	return total;
}

main()
{
	int a[]={1,2,3,4,5};
	
	printf("Sum = %d",sum(a));
	
	
}
