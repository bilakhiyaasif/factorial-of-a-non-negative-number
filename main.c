#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{

    if(argc==1)
    {
        printf("please enter command line argument");
    }
    int a=atoi(argv[1]);
	int z=0;
	if(a>=0)
	{
       z=fun1(a);
       printf("%d",z);
	}
	else
	{
       printf("a is negative");
	}
    return 0;
}

int fun1(int a)
{
	if(a==0)
	{
    return 1;
	}
	else
	{
    return a*fun1(a-1);
	}
	return 0;
}
