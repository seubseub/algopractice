package dd;

import java.util.Scanner;
public class Main {

	private static Scanner sc;
	
	public static int sort(int n, char[] temp)
	{
		int sum =0;
		
		int temp_n = n;
		int temp_sum = 0;
		
		for(int i =0 ; i<temp_n; i++)
		{
			temp_sum =0;
			if(temp[i] != 'X')
			{
				temp_sum+=1;
				int j = 0;
				int temp_i = i;
				while(temp_i-j>0)
				{
					if(temp[temp_i-(j+1)] == 'X')
					{
						break;
					}
					
					else{
						if(temp[temp_i-(j+1)] == temp[temp_i])
						{
							temp_sum+=1;
						}
					}
				 
					j++;
				}
			}
			sum += temp_sum;
		}
		
		return sum;
	}
	
	public static void main(String[] args)
	{
		int n;
		int temp_n;
		sc = new Scanner(System.in);
		n= sc.nextInt();
		String []str = new String[n];
		int cnt[] = new int[n];
		
		for(int i = 0; i<n;i++)
		{
			str[i] = sc.next();
			char[] temp = str[i].toCharArray();
			temp_n = temp.length;
			cnt[i] = sort(temp_n, temp);
		}
		for(int j= 0;j<n;j++)
		{
			System.out.println(cnt[j]);
		}
	}	
}
