import java.util.*;

class iterativeBS{
	
	static int bin(int a[],int item,int n0,int n)
	{	
		int h=n;
		
		while(h>=1)
		{
		h=n0+(n-n0)/2;
		
		if(item==a[h])
		return h;
		else 
		{
			if(item<a[h])
			{
				n0=0;
				n=h;
				
			}		
			else
			{
				n0=h+1;
				n=n;
				
			}
		}
		}
		return -1;
	
	}
	
	public static void main(String args[])
	{
		int n,a[]=new int[10],item;
		System.out.println("Enter no of elements");
		Scanner scan=new Scanner(System.in);
		n=scan.nextInt();
		System.out.println("Enter array elements");
		for(int i=0;i<n;i++)
		{
			a[i]=scan.nextInt();

		}
		System.out.println("Enter element to be searched");
		item=scan.nextInt();

		int ans=bin(a,item,0,n);		
		if(ans==-1)
		System.out.println("No such entry");
		else
		System.out.println("at"+ans);
	}
}