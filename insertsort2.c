#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InsertionSort(int str[],int n);

int main()
{
	int i = 0;
	int str[] = {5,2,4,6,1,3};
	int size = sizeof(str)/sizeof(*str);

	printf("%d \n",size);

	for(i=0;i<6;i++)
	{
		printf("%d",str[i]);
	}
	
	printf("\n");
	InsertionSort(str,size);

	for(i=0;i<6;i++)
	{
		printf("%d",str[i]);
	}
	printf("\n");

	return 0;
}

void InsertionSort(int str[],int n)
{
	int i,j,k;
	int key;
	int tmp;
	printf("Size : %d\n",n);

	for(j=1;j<n;j++)
	{
		key = str[j];
		i= j-1;
		while(i>=0)
		{
			if(str[i]>key)
			{
				tmp = str[i+1];
				str[i+1] = str[i];
				str[i] = tmp;
			}
			i = i-1;
		}
		for(k=0;k<n;k++)
		{
			printf("%d",str[k]);
		}
		printf("\n");
	}

}
