import java.util.Scanner;

public class main {
	private static Scanner sc;
	private static int [] temp_arrays;
	public static void main(String[] args)
	{
		int n; // 받는 갯수 
		int temp_n; //임시 변수
		sc = new Scanner(System.in);
		n= sc.nextInt();
		temp_n = n;
		int ArrayA[] = new int[n];
		int ArrayB[] = new int[n];
		
		for(int i =0; i<temp_n;i++)
		{
			ArrayA[i] = sc.nextInt();
		}
		
		for(int j= 0; j<temp_n;j++)
		{
			ArrayB[j] = sc.nextInt();
		}
		int val = sorting(n,ArrayA, ArrayB);
		System.out.println(val);

	}
	
	public static int sorting(int n,int[] arrayA, int[] arrayB)
	{
		int sum = 0;
		
		int temp;
		int temp_n = n;
		int temp_n2 = n;
		temp_arrays = null;
		while(temp_n>0){
			for(int i =0;i<n-1;i++)
			{
				if(arrayA[i] > arrayA[i+1])
				{
					temp = arrayA[i];
					arrayA[i] = arrayA[i+1];
					arrayA[i+1] = temp;
				}
			}
			temp_n--;
		}
		while(temp_n2>0)
		{
			for(int j = 0;j<n-1;j++)
			{
				if(arrayB[j] <arrayB[j+1])
				{
					temp = arrayB[j];
					arrayB[j] = arrayB[j+1];
					arrayB[j+1] = temp;
				}		
			}
			temp_n2--;
		}
		
		for(int j = 0; j<n; j++)
		{
			sum += arrayA[j]*arrayB[j];	
		}
		return sum;
	}
}
