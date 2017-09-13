#include<stdio.h>
int main()
{
        typedef int * p; // change the datatype of pionter to check other (i.e char *, flaot *, void *,double *) -> Ex: typedef double * p;
        p i=0;
        p *ptr=0;
        printf("size of of datatype=%d\n", i+1);
        printf("size of of pointer using sizeof operator=%d\n",sizeof(int *) );
        printf("sizeof of pointer without using sizeof operator=%d\n", ptr+1);
        return 0;
}

or

#include<stdio.h>
int main()
{
        //typedef double * p; // change the datatype of pionter to check other (i.e char *, flaot *, void *,double *) -> Ex: typedef double * p;
        char * i=0;
        char **ptr=0;
        printf("size of of datatype=%d\n", i+1);
        printf("size of of pointer using sizeof operator=%d\n",sizeof(int *) );
        printf("sizeof of pointer without using sizeof operator=%d\n", ptr+1);
        return 0;
}

or for generic

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[20];
    cout<<"Enter the type of pointer"<<endl;
	cin>>str;
	cout<<"entered pointer type "<<str<<endl;
	cout<<sizeof(int *)<<endl;
    if(strcmp("int", str)==0)
	{
		int **ptr=0;
		cout<<"size of entered pointer type is "<<ptr+1<<endl;
	}
	
	else if(strcmp("char", str)==0)
	{
		char **ptr=0;
		cout<<"size of entered pointer type is "<<ptr+1<<endl;
	}
	
	else if(strcmp("float", str)==0)
	{
		float **ptr=0;
		cout<<"size of entered pointer type is "<<ptr+1<<endl;
	}
	
	else if(strcmp("double", str)==0)
	{
		double **ptr=0;
		cout<<"size of entered pointer type is "<<ptr+1<<endl;
	}
	
}




