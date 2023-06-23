#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int i,x,flag,j,opcount=0;
	char text[30];
	char pattern[30];
	printf("Enter the text : ");
	scanf("%s",text);
	printf("Enter the pattern : ");
	scanf("%s",pattern);
	int t=strlen(text);
	int p=strlen(pattern);
	for(i=0;i<(t-p)+1;i++)
	{
		int counter=0;
		for(j=0;j<p;j++)
		{
			opcount++;
			x=i+j;
			if (text[x]==pattern[j])
			{
				counter++;
			}
		}
		if (counter==p)
		{
			flag=1;
			break;
		}

	}
	if (flag)
	{	
		printf("Pattern found at position %d\n",x-1);
	}
	else
	{
		printf("Pattern not found");
	}
	printf("Operation Count is %d\n",opcount);


}