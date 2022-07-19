//Write a program to print all the LEADERS in the array. 
//An element is leader if it is greater than all the elements to its right side.
 //And the rightmost element is always a leader.

#include <stdio.h>
#include <conio.h>

int main()
{
	int n,i,j,k,c;
	int last;
	int result[10];
	int ele;
	
	printf("Enter the size of the array :");
	scanf("%d",&n);
	
	int arr[n];

		printf("Enter the elements in the array :");
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
	
		
		for(j=0;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
			if(arr[j]<arr[k])
			break;
			  }
				
		if(k==n)
		printf("%d  ",arr[j]);			
				
		}
		
		return 0;
		
}
