import java.util.*;
class selectionSort{
	public static void main(String args[])
	{
		int n, a[]=new int[10],smallest;
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter n");
		n=scan.nextInt();
		for(int i=0;i<n;i++)
		{
			a[i]=scan.nextInt();
		}
		
		for(int i=0;i<n-1;i++)
		{
			smallest=i;
			for(int j=i+1;j<n;j++)
			{
				if(a[smallest]>a[j])
				{
					smallest=j;
					
				}
				
			}

				int temp=a[i];
				a[i]=a[smallest];
				a[smallest]=temp;
				
				
		}

		
		

		for(int i=0;i<n;i++)
		{
			System.out.println(a[i]);
		}
		
	}
}