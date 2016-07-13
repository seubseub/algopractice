#include <stdio.h>
#include <stdlib.h>

typedef struct coordinate{
	int x;
	int y;
}cor;
int main()
{
	cor a,b,c; // a : start coordinate, b : end coordinate,c : check every time that if start & end coordinates are in c(circle)
	int t;// test case number
	int n;//number of circle
	int *r; // radian
	int *count; // count
	int i;
	scanf("%d",&t); // get test case
	int temp_t = t;
	r = (int*)malloc(sizeof(int)*t);
	count = (int*)malloc(sizeof(int)*t);
	int dis_From_Start, dis_From_End;

	while(t>0)
	{
		count[t] = 0;

		scanf("%d %d %d %d",&a.x,&a.y,&b.x,&b.y); // start end coordi

		scanf("%d",&n);// get number of circle 
		for(i= 0; i<n;i++)
		{
			scanf("%d %d %d",&c.x,&c.y,&r[i]); // circle's coordinate & radian
			dis_From_Start = ((a.x-c.x)*(a.x-c.x)+ (a.y-c.y)*(a.y-c.y));
			dis_From_End = ((b.x-c.x)*(b.x-c.x) + (b.y-c.y)*(b.y-c.y));
			if((dis_From_Start< (r[i]*r[i])) && ((dis_From_End<(r[i]*r[i]))))
			{}

			else 
			{
				if(dis_From_Start < (r[i]*r[i]))
				{
					count[t] +=1;
				}
				if(dis_From_End<(r[i]*r[i]))
				{
					count[t] += 1;
				}
			}
		
		}
		t--;
	}

		for(i=temp_t; i>0; i--)
		{
			printf("%d\n",count[i]);
	}
		free(r);
		free(count);
		return 0;
}
