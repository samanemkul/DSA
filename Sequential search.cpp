//Sequential search
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,a[100],key,flag=0;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the item to be searched\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Search successful\n");
		printf("position=%d\n",i+1);
	}
	else
	{
		printf("Search unsuccessful\n");
	}
	return 0;
}
