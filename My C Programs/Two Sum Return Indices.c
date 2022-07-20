#include <stdio.h>
#include <conio.h>

int main()
{
	int n,i,j,sum,t;
	
	printf("Enter the size of the array :");
	scanf("%d",&n);
	   
	   int arr[n];
		printf("Enter the elements of the array :");
       for(i=0;i<n;i++)
     	{
			scanf("%d",&arr[i]);
		}
	
		printf("Enter the target :");
    	scanf("%d",&t);
	   
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=arr[i]+arr[j];
			
			if(sum==t)
			{
				printf("%d,%d",i+1,j+1);
			}
		}
	}
	
	return 0;
}
