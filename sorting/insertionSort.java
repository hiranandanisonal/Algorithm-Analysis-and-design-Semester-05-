import java.util.*;
class insertionSort
{
	public static void main(String args[])
	{
		int n, a[]=new int[10],temp,i,j,index;
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter n");
		n=scan.nextInt();
		System.out.println("Enter array elements");
		for(i=0;i<n;i++)
		{
			a[i]=scan.nextInt();	
		}
		
		
		//Insertion logic
		
		for(i=1;i<n;i++)
		{
			index=a[i];
			for(j=i-1;j>=0;j--)
			{
				if(a[j]>index)
				{
					a[j+1]=a[j];
				}
			}
			a[j+1]=index;
		}

		//--------------------------


		for(i=0;i<n;i++)
		{
			System.out.print(a[i]+",");	
		}
		
	}
}