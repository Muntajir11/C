#include <stdio.h>

int main()
{
	int n,i,k,j;

		printf("Enter the total number of elements :");
	    scanf("%d",&n);
	    
    	int arr[n];
    	int temp[n];
    	int final[n];
    	
     	printf("Enter the numbers in array number :");
    	for(i=0;i<n;i++)
    	{
		scanf("%d",&arr[i]);
		}
		
				printf("Enter number of times to rotate :");
	             scanf("%d",&k);
	    
    
    	  for(j=0;j<k;j++)
		{
			temp[j]=arr[j];
		}
		
		int c=0;
		for(j=k;j<n;j++)
		{
			final[c]=arr[j];
			c++;
		}
		 int m=n-k;
		 int l=0;
		for(i=m;i<n;i++)
		{
			final[i]=temp[l];
			l++;
		}
			printf(" The rotated array  :");
    	for(i=0;i<n;i++)
    	{
		printf("%d  ",final[i]);
		}
		
		return 0;
	}
		
