#include <stdio.h>

int add_two(int a, int b)
{
	return a+b;
}

int main()
{
	int x = 10;
	int y = 20;
	printf("Result: %d ",add_two(x,y));
}
