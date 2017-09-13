/*program to calculate the size of datatypes without using sizeof operator*/
#include<stdio.h>
int main()
{
	int *iptr=0;
	char *cptr=0;
	float *fptr=0;
	double *dptr=0;
	printf(" the size of datatypes in my system : int=%d, char=%d, float=%d, double=%d\n",iptr+1, cptr+1, fptr+1, dptr+1);
	return 0;
}