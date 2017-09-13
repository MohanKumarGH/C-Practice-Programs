#include <stdio.h>
int main()
{
	int n;
	printf("enter the number of elements for fibonacii series\n");
	scanf("%d",&n);
	int f[n];
	int i=3;
	printf("Enter 2 integer numbers\n");
	scanf("%d%d",&f[0],&f[1]);
	for(i=2;i<n;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	
	printf("Fibonacci series of entered numbers :\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",f[i]);
	}
    printf("\n");
    return 0;
}
