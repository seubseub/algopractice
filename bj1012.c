#include <stdio.h>
#include <stdlib.h>

typedef struct coordinate{
    int x;
    int y;
}coor;

int main()
{
	coor *co; // coordinate num
   	int m,n; // m : width , n : height
	int k; // cabbage num
    
    	int t; // test case
    	int temp_t = t;
    	int count = 0;
    	int *count_arr;
    	int z = 0;
    	scanf("%d",&t);
    
    	count_arr = (int*)malloc(sizeof(t));
    
    	while(t>0)
    	{
       		count = 0;
        	scanf("%d %d %d",&m,&n,&k); // get width, height, cabbage num
        
        	co = (coor*)malloc(sizeof(coor*)*2);
        
        	for(int i = 0;i<k;i++)
        	{
            	scanf("%d %d",&co[i].x,&co[i].y);
        	}
        
       		for(int j =0;j<k;j++)
        	{
            		if(j==0) // 초기값이므로 무조건 배추흰지렁이가 어딘가에 있음
                	{
                        count++;
                        printf("count in initialize :%d\n", count);
                    }
            
            		for(int a = j+1;a<k-j;a++)
            		{
                		if((co[j].x == (co[a].x)+1) || (co[j].x == (co[a].x)-1) || (co[j].y == (co[a].y)+1) || (co[j].y == (co[a].y)-1)) //어떠한 초기점부터에 있어서 저장된 좌표와 이후 좌표들간의 인접성을 보는 것
                        {
                            count = count;
                            printf("count in not count : %d\n", count);
                        }
                    	else
				        {
                        	count++;
                            printf("count that count%d\n", count);
                			break;
				        }
           		 }
        	}
            printf("final count: %d\n", count);
        	count_arr[z] = count;
        	free(co);
       		z++;
        	t--;
        
    	}
    
    for(int i = 0;i<temp_t;i++)
    {
        printf("%d",count_arr[i]);
    }
    
    return 0;
}
