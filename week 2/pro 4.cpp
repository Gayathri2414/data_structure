#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i,m;
	printf("enter n:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	while(true)
	{
	printf("\n enter the value of m:");
	scanf("%d",&m);
	if(m<n)
	{
		printf("\n the value of m should be greater than n");
	}
    else
    {
    	break;
	}
}
	printf("\n enter the elements of the array from range 0 to %d-1:",m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i>0)
		{
		if(a[i-1]<a[i])
		{
			 if(a[i]>=0 && a[i]<=(m-1))
			 {
			continue;
		     }
		     else
		     {
		      printf("enter the element in range 0 to %d-1",m);
		      i--;
			 }
		}
		else
		{
			printf("Do not enter repeating values");
			i--;
		}
	}}
	for(i=0;i<m-1;i++)
	{
		if(a[i]!=i)
		{
			printf("the missing element is %d",i);
			break;
		}
	}
}
