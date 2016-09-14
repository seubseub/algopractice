#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct coordinate{
	int x;
	int y;
}cor;

int main(){
	cor a,b;

	int t,i;
	double dis; // distace between a & b
	double pp; // r1+ r2
	double mm; // r1-r2
	double r1,r2;
	int k = 0;
	int count;
	int *countarr;
	int temp_t;
	scanf("%d",&t);
	countarr = (int*)malloc(sizeof(int)*t);
	temp_t = t;
	while(t>0)
	{
		count = 0;
		scanf("%d %d %lf %d %d %lf",&a.x,&a.y,&r1,&b.x,&b.y,&r2);
		
		dis = ((a.x-b.x)*(a.x-b.x)) + ((a.y-b.y)*(a.y-b.y));

		pp = (r1+r2)*(r1+r2);
		mm = (r1-r2)*(r1-r2);
		if(dis == 0 && r1 == r2)
			count = -1;
		else if(dis>pp || dis<mm)
			count = 0;
		else if(dis == pp || dis == mm)
			count = 1;
		else
			count = 2;
		countarr[k] = count;
		k++;
		t--;
	}
	for(i=0;i<temp_t;i++)
	{
		printf("%d\n",countarr[i]);
	}

	return 0;
}
					


