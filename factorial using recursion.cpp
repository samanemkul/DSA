#include<stdio.h>
#include<conio.h>
int fact (int);
int main()
{
	int result=0;
	int num;
	printf("\n Enter the number you want to know the factorial\n");
	scanf("%d",&num);
	result=fact(num);
	printf("\n result=%d",result);
	return 0;
}
int fact (int x)
{
	if(x!=0)
	{
		return(x*fact(x-1));
	}
	else
	{
		return 1;
	}
}
