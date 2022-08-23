#include<stdio.h>
#include<conio.h>
// declaring the recursive function
int Palin(int );
int n;
int main()
{
    
    int palindrome;
    printf("\n\nEnter a number to check for Palindrome: ");
    scanf("%d", &n);
    palindrome = Palin(n);
    if(palindrome == 1)
        printf("\n\n\n%d is palindrome\n\n", n);
    else
        printf("\n\n\n%d is not palindrome\n\n", n);

   
    return 0;
}

int palin(int a)
{
    int sum = 0;
    if(a != 0)
    {
        sum = sum *10 + a%10;
        palin(a/10);   
    }
    else if(sum == n)
        return 1;
    else
        return 0;
}

