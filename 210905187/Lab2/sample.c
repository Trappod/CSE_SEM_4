#include<stdio.h>

unsigned int EuclidGCD(unsigned int m,unsigned int n)
{
	int opcount=0;
	int r;
	while (n!=0)
	{
		opcount++;
		r=m%n;
		m=n;
		n=r;
	}
	printf("Operation count= %d\n", opcount);
	return m;
}

int main()
{
	int m,n;
	printf("Enter first number for gcd calculation");
	scanf("%d",&m);
	printf("Enter second number for gcd calculation");
	scanf("%d",&n);	
	printf("The GCD of the numbers given is %d",EuclidGCD(m,n));
	return 0; 
}