#include <stdio.h>
#include <stdlib.h>
#define SIZE_ARR 300
int zero_count[SIZE_ARR];
int one_count[SIZE_ARR];
int fibonacci(int n,int k)
{
	if(n==0){
		zero_count[k]+=1;
		
		return 0;
	}
	else if(n==1){
		one_count[k]+=1;
		return 1;
	}else{
		return fibonacci(n-1,k) + fibonacci(n-2,k);
	}
}

int main()
{
	int i,j;
	int *zero_arr;
	int *one_arr;
	int k = 0;

	scanf("%d",&i); // input
	int temp_i = i;
	zero_arr = (int*)malloc(sizeof(int)*i);
	one_arr = (int*)malloc(sizeof(int)*i);
	while(i>0)
	{
		zero_count[k] = 0;
		one_count[k] = 0;
		scanf("%d",&j);
		fibonacci(j,k);
		zero_arr[k] = zero_count[k];
		one_arr[k] = one_count[k];
		i--;
		k++;
	}

	for(k= 0;k<temp_i;k++)
	{
		printf("%d %d\n",zero_arr[k],one_arr[k]);
	}

	free(zero_arr);
	free(one_arr);
	return 0;
}

