#include <stdio.h>
#include <stdlib.h>
int combi(int n, int r)
{
	int p = 1;
	int i;
	for(i = 1;i<=r;i++)
	{
		p = p*(n-i+1)/i;
	}
	return p;
}

int main()
{
	int t; // Test Case num

	int *str;

	int n,m;
	scanf("%d",&t);
	int temp_t = t;

	int i = 0;

	str = (int*)malloc(sizeof(t));
	while(t>0)
	{
		scanf("%d %d",&n,&m);

		if(n==m)
		{
			str[i] = 1;
		}
		else
		{
			str[i] = combi(m,n);
		}
		i++;
		t--;
	}

	for(i =0;i<temp_t;i++)
	{
		printf("%d\n",str[i]);
	}
	return 0;
}
	
