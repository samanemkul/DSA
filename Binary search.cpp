//Binary search
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,mid=0,l,i,key,mid2=0,a[100],flag=0;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int h=n-1;
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the item to be searched\n");
	scanf("%d",&key);
	while(l<=h)
	{
		mid=l+h;
		mid2=mid/2;
		if(a[mid2]<key)
		{
			l=mid2+1;
		}
		else if (a[mid2]>key)
		{
			h=mid2-1;
		}
		else
		{
			flag =1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("\nSuccessful Search");
	}
	else
	{
		printf("\nUnsuccessful Search");
	}
	return 0;
}
