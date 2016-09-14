#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

typedef struct coordinate{
	int x;
	int y;
}cor;

int main(){
	int start = clock();
	cor a,b,c; //c : We want to know c.x, c.y

	int t; //test case num

	int r1,r2;
	int count;
	int k = 0; // Used for make countarr 
	int *countarr;

	int i,j; // Used for 'for'
	scanf("%d",&t); // get number of test case

	int temp_t = t;
	countarr = (int*)malloc(sizeof(int)*t);
	while(t>0)
	{
		count =0;
		scanf("%d %d %d %d %d %d",&a.x,&a.y,&r1,&b.x,&b.y,&r2); // get data
		for(i=-1000;i<1000;i++)
		{
			for(j=-1000;j<1000;j++)
			{
				c.x = i;
				c.y= j;

				if(sqrt(pow((double)(a.x-c.x),2.0)+pow((double)(a.y-c.y),2.0)) == (double)r1) // Decide c.x, c.y fit for r1
				{
					if(sqrt(pow((double)(b.x-c.x),2.0)+pow((double)(b.y-c.y),2.0)) == (double)r2) // Decide c.x,c.y witch already fit for r1 fir for r2 either
					{
						count++;
					}
				}

			}
		}
		if(count>2000)//infinte
			countarr[k] = -1;
		
		countarr[k] = count;
		k++;
			
		t--;
	}

	for(i = 0; i<temp_t;i++)
	{
		printf("%d\n",countarr[i]);
	}
	int end = clock();
	int duration = (end-start)/CLOCKS_PER_SEC;

	printf(" Duration : %d",duration);

	free(countarr);

	return 0;
}







