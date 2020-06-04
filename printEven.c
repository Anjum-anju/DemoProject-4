#include<stdio.h>

void printEven(int x)
{
   (x%2 == 0)?printf("Even number\n"):printf("odd number\n");
}

int main()
{
	printEven(10);
	return 0;
}
