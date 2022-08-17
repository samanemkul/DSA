#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,a[100],temp=0,j;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The sorted array is");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
