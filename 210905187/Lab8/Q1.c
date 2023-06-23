#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
	int temp= *a;
	*a = *b;
	*b= temp;
}

void heapify(int arr[], int n, int i)
{
	int greatest=i;
	int leftside= 2 * i + 1;
	int rightside=2 * i + 2;

	if (leftside < n && arr[leftside] > arr[greatest])
	{
		greatest=leftside;
	}
	if (rightside < n && arr[rightside] > arr[greatest])
	{
		greatest= rightside;
	}
	if (greatest != i)
	{
		swap(&arr[i], &arr[greatest]);
		heapify(arr, n, greatest);
	}
}

void heapsort(int arr[], int n)
{
	for(int i= n/2 - 1; i>=0; i--) 	
	{
		heapify	(arr, n, i);
	}
	for(int i= n - 1; i>=0; i--)
	{
		swap(&arr[0],&arr[i]);
		heapify	(arr, n, i);
	}	
}

int main()
{
	int arr[100],n,i;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	heapsort(arr,n);
	printf("Sorted array is \n");
		for (int i =0;i<n;i++)
		{
			printf("%d \t",arr[i]);
		}
}