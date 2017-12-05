import java.util.*;
class quick
{
		
		static int partition(int a[],int l,int r)
		{	
			int i=l,j=l-1,pivot=r;
			while(i<=r-1)
			{
			if(a[i]>a[pivot])
			{
				i++;
			}
			else
			{
				
				j++;
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
				i++;
			}
			}
				++j;
			
				int temp=a[pivot];
				a[pivot]=a[j];
				a[j]=temp;
				
			return j;
			
		}		


		static void quicksort(int a[],int l,int r)
		{
			if(l>r)
				return ;
			else{
			int pivot;
			pivot=partition(a,l,r);
			quicksort(a,l,pivot-1);
			quicksort(a,pivot+1,r);}
			
		}
		
		public static void main(String args[])
		{
			int n,a[]=new int[10];
			System.out.println("Enter n");
			Scanner scan=new Scanner(System.in);
			n=scan.nextInt();
			int l=0,r=n-1;
			for(int i=0;i<n;i++)
			{
				a[i]=scan.nextInt();
			}
			
			//----------------------quicksort logic-------------------------
			
			quicksort(a,l,r);
			
				
			//--------------------------------------------------------------


			for(int i=0;i<n;i++)
			{
				System.out.print(a[i]+",");
			}
		}
}