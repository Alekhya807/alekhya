#include<stdio.h>
main()
{
	int r,n,count=0;
	printf("\n enter n value:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		count++;
		n=n/10;
	}
	printf("\n no of dig:%d",count);
}
