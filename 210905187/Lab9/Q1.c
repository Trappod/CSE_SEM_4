#include<stdio.h>
#include<string.h>

void getShiftTable(int shiftTable[],char pattern[],int plen)
{
	int i;
	for(i=0;i< plen-1;i++)
	{
		shiftTable[(int) pattern[i]]=plen-1-i;
	}
}

int horspool(char text[], char pattern[], int slen, int plen, int *comparisons)
{
	int i,j;
	int shiftTable[127];
	for (i=0;i<127;i++)
	{
		shiftTable[i]=plen;
	}
	getShiftTable(shiftTable,pattern,plen);
	
	i=plen-1;
	while(i<slen)
	{
		j=0;
		while(j< plen && pattern[plen-1-j]== text[i-j])
		{
			j++;
		}
		*comparisons=*comparisons + j +1;
		if(j==plen)
		{
			return (i-plen+1);
		}
		else
			i=i+shiftTable[(int) text[i]];
	}
	return -1;
}

void main()
{
	int res,comparisons =0;
	char text[100],pattern[100];
	printf("Enter the text: ");
	scanf("%[^\n]",text);
	printf("Enter the pattern: ");
	scanf("%s",pattern);
	res = horspool(text, pattern, strlen(text), strlen(pattern), &comparisons);
    if (res == -1)
        printf("Pattern not found. Comparisons: %d\n",comparisons);
    else
        printf("Pattern found at index %d. Comparisons: %d\n",res,comparisons);
}

	