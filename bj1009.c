#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a,b;
	int num; // num : Test Case, a^b : number of Data, b : computer
	int *str;
	scanf("%d",&num); // get Test Case number
	str = (int*)malloc(sizeof(num));
	int temp_num = num;
	int i = 0;

	while(num>0)
	{
		scanf("%d %d",&a,&b);
		int d = a%10;

		int e = b%4;
		int f = b%2;
		
		switch(d)
		{
			case 0:
				str[i] = 10;
				break;
			case 1:
				str[i] = d;
				break;
			case 2:
			case 3:
			case 7:
			case 8:
				if(e == 0)
					str[i] = (a*a*a*a)%10;
				else if(e == 1)
					str[i] = a%10;
				else if(e == 2)
					str[i] = (a*a)%10;
				else if(e == 3)
					str[i] = (a*a*a)%10;
				
				break;
			case 4:
			case 9:
				if(f == 0)
					str[i] = (a*a)%10;
				else if(f == 1)
					str[i] = a%10;
				break;
			case 5:
			case 6:
				str[i] = d;
				break;
			default:
				break;
		}
		i++;
		num--;
	}
	for(i =0 ; i<temp_num;i++)
	{
		printf("%d\n",str[i]);
	}

	free(str);
	return 0;
}
