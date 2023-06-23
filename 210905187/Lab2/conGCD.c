#include<stdio.h>

unsigned int ConGCD(unsigned int m, unsigned int n)
{
	unsigned int t=m>n?n:m;
	int opcount=0;
	while (t>0)
	{	
		opcount++;
		if (m%t==0 && n%t==0)
		{
			break;
		}
		t--;

	}
	printf("Operation count: %d\n",opcount);
	return t;
}

int main()
{
	int m,n;
	printf("Enter the first number to be checked");
	scanf("%d",&m);
	printf("Enter the second number to be checked");
	scanf("%d",&n);
	printf("The GCD of both the numbers using consecutive integer checking is %d\n",ConGCD(m,n));
	return 0;
}