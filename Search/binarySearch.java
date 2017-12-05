//binary search using iterative method

import java.util.*;
class binarySearch
{

	
	static int bin(int a[],int item,int n0,int n)
	{
		int h=n0+(n-n0)/2;
		if(item>a[n-1] || item<a[0])
		return -1;

		else if(item==a[h])
		return h;

		else
		{
			
			if(item<a[h])
			return bin(a,item,0,h);
			
			else
			return bin(a,item,h+1,n);
			
		}

		
	}
	public static void main(String args[])
	{
		int n, a[]=new int[10],item;
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter number of elements");
		n=scan.nextInt();
		System.out.println("Enter sorted array");
		for(int i=0;i<n;i++)
		{
			a[i]=scan.nextInt();
		}

		System.out.println("Enter element to be searched");
		item=scan.nextInt();



		int ans=bin(a,item,0,n);
		if(ans==-1)
		{
			System.out.println("Does not exist");
		}
		else
		{
			System.out.println("Element exists at "+ans+"th position");
		}
		
		

		
		
			
	}
}