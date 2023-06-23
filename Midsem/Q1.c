#include<stdio.h>
int largesort(int arr[100],int n)
{
	int i,temp,x;
	printf("Sorting the array from lowest to highest");
	for (i=0;i<n;i++)
	{
		if (arr[i]>arr[i+1])
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	printf("Sorted array and largest element: \n ");
	for (i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
		printf("\n");
		printf("%d",arr[n-1]);
	}
	return 0;
}
int Knap(int n, int W, int arr1[100], int arr2[100])
{
	int i,j,cost[100],c;
	for(i=0;i<n;i++)
	{
		printf("Set of %d of {%d,%d}",(i+1),arr1[i],arr2[i]);
		printf("Calculating cost for above set: \n");
		for(j=0;j<n-i;j++)
		{
			c=arr2[j]+arr2[j+1];
			cost[i]=c;
			printf("%d",cost[i]);
			printf("\n");
			j++;
		}
	}
}

int main()
{
	int W,i,n,arr1[100],arr2[100];
	printf("Enter weight for knapsack: ");
	scanf("%d",&W);
	printf("Enter number of values for Knapsack: ");
	scanf("%d",&n);
	printf("Enter elements for array 1 in terms of values: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter elements for array 2 in terms of weights: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	Knap(n,W,arr1,arr2);
}

