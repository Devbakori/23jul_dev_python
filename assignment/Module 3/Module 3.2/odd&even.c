#include<stdio.h>  
int main()   
{   
    int number;

    printf("Enter a number to check for Even / Odd = ");
    scanf("%d", &number);

	(number%2==0)?printf("%d is Even",number):printf("%d is Odd",number);
	
	return 0;
}
