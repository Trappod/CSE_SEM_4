#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
	int temp= *a;
	*a=*b;
	*b=temp;
}

void heapify(int arr[], int n, int i)
{
	int greatest= i;
	int leftside= 2*i+1;
	int rightside=2*i+2;

	if(leftside <n && arr[leftside]> arr[greatest])
		greatest=leftside;

	if(rightside < n && arr[rightside] > (arr[greatest]))
		greatest=rightside;

	if(greatest != i)
	{
		swap(&arr[i],&arr[greatest]);
		heapify(arr, n, greatest);
	} 
}

void topdown(int * arr, int n)
{
	for(int i=0; i<n;i++)
	{
		scanf("%d",&arr[i]);
		if (i>=2)
		{
			heapify(arr,i+1,i/2-1);
		}
	}
}

int main()
{
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	int * arr = (int *)calloc(n,sizeof(int));
	topdown(arr,n);
	printf("Max Heap is \n");
	for (int i=0;i<n;i++)
	{
		printf("%d \t",arr[i]);
	}
}