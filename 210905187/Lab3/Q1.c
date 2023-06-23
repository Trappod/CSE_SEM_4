#include<stdio.h>

int main()
{
	int n,i,j,arr[100],temp,opcount=0;
	printf("Enter the size of the array");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			opcount++;
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("The sorted elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nOperation Count is %d\n",opcount);
}