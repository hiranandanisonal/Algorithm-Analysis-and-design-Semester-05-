import java.util.*;
class bubble{


	
	

	public static void main(String args[])
	{

	


		int a[]=new int[10],n,counter=0;
		boolean FLAG=true;
		System.out.println("Enter no of elements");
		Scanner scan=new Scanner(System.in);
		n=scan.nextInt();
		for(int i=0;i<n;i++)
		{
			a[i]=scan.nextInt();
		}
		
		int i=n-2,j=0;
		while(i>=0 && (FLAG))
		{
			j=0;
			FLAG=false;
			counter++;
			while(j<=i && a[j]>a[j+1])
			{
				
				

				
					counter++;
					
					int temp;
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					FLAG=true;
				
					j++;
					
			}
			i--;
		}

		for(i=0;i<n;i++)
		{
			System.out.println(a[i]+",");
		}
		System.out.println(counter);
		
	}
}