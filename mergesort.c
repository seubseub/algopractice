#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merge(int str[],int left,int middle, int right);
void divide(int str[],int left, int right);

int main()
{
	int i = 0;
	int *str;
	int left, right;
	int tmp;
	
	// set left right
	left =0;
	printf("how many do you want to insert?\n");
	scanf("%d", &tmp);
	right = tmp-1;
	str = (int*)malloc(tmp*sizeof(int));
	
	// input unsorted list
	for(i =0; i< tmp; i++)
		scanf("%d", &str[i]);

	printf("Before Sorting : ");
	for(i=0;i<=right;i++)
	{
		printf("%d ",str[i]);
	}
	printf("\n\n");

	divide(str,left,right); // implementation of merge sort

	printf("\n");
	return 0;

	free(str);
}


void divide(int str[],int left,int right) // part of divide
{
	if(left<right)
	{
		int middle = (left+right)/2;
		divide(str,left,middle);
		divide(str,middle+1,right);
		merge(str,left,middle,right);
	}
}

void merge(int str[],int left,int middle,int right) // part of merge
{
	int* tmp;
	int i = 0;
	int j = 0;
	
	tmp = (int*)malloc(sizeof(int)*(right-left+1));
	int left_end = middle;
	int left_tmp = left;
	int right_start = middle+1;
	int left_count = left;

	printf("Before Merge : ");
	for(i=left;i<=right;i++)
	{
		printf("%d ",str[i]);
	}
	printf("\n");
	
	printf("Left : %d  Middle : %d Left_end : %d Right_start : %d Right : %d\n",left,middle,left_end,right_start,right);
	for(i=left_count;i<=right;i++)
	{
		if((left_tmp <=left_end) && (right_start<=right))
		{
			if(str[left_tmp]>str[right_start])
			{
				tmp[i] = str[right_start];
				right_start++;
			}
			else if(str[left_tmp]<=str[right_start])
			{
				tmp[i] = str[left_tmp];
				left_tmp++;
			}
		}
		else if(left_tmp>left_end)
		{
			tmp[i] = str[right_start];
			right_start++;
		}
		else if(right_start>right)
		{
			tmp[i] = str[left_tmp];
			left_tmp++;
		}

	}

	printf("After Merge : ");
	for(i=left;i<=right;i++)
	{
		str[i] = tmp[i];
		printf("%d ",str[i]);
	}
	printf("\n\n");

	free(tmp);

}




