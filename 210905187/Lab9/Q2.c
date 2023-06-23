#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node *Nodeptr;
struct node
{
	int data;
	Nodeptr next;
};

Nodeptr getnode()
{
	return (Nodeptr)calloc(1,sizeof(struct node));
}

Nodeptr InsL(Nodeptr root, int x)
{
	Nodeptr temp=getnode();
	temp->data=x;
	temp->next=NULL;
	if (root)
	{
		Nodeptr last=root;
		while(last->next)
		{
			last=last->next;
		}
		last->next=temp;
		return root;
	}
	return temp;
}

void Display(Nodeptr list)
{
	if(!list)
	{
		printf("NULL");
	}
	while(list)
	{
		printf("%d\t",list->data);
		list=list->next;
	}
	printf("\n");
}

void main()
{
	int i,m,n,key,mod;
	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	printf("Enter the number of cells: \n");
	scanf("%d",&m);
	double alpha=n/m;
	Nodeptr HashTable[m];
	for(i=0;i<m;i++)
	{
		HashTable[i]=NULL;
	}
	for (i=0;i<n;i++)
	{
		printf("Enter key %d: \n",i+1);
		scanf("%d",&key);
		mod=key%m;
		HashTable[mod]=InsL(HashTable[mod],key);
	}
	for (i=0;i<m;i++)
	{
		printf("%d\t",i);
		Display(HashTable[i]);
	}
	printf("Succesful search comparisons: %f\n",1+alpha/2);
	printf("Unsuccesful search comparisons: %f\n",alpha);
}