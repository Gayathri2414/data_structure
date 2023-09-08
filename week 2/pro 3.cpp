#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,n,x,i,c=0,flag=0,j,k;
	printf("enter n:");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the value of X:");
	scanf("%d",&x);
	while(true)
	{
	if(flag<=n)
	{
	for(i=0;i<n;i++)
	{
		flag++;
		for(j=i+1;j<n;j++)
		{
			if((arr[i]+arr[j])>x)
			{
				c=1;
				printf("\n the smallest subarray is (%d,%d)",arr[i],arr[j]);
			    break;
			}
	     	}
	     	if(c==1)
		{
			break;
		}
		}
	}
	  else
	  {
	  	c=0;
	  	for(i=0;i<n;i++)
	  	{
	  	for(j=i+1;j<n;j++)
	  	{
		for(k=j+1;k<n;k++)
			{
				if((arr[i]+arr[j]+arr[k])>x)
				{
					printf("\n the smallest subarray is (%d,%d,%d)",arr[i],arr[j],arr[k]);
					c=1;
			        break;
				}
			}
	  
	  if(c==1)
	  {
	  	break;
	  }
	  }
       if(c==1)
       {
	  	break;
	  }
	  }
	  }
	  if(c==1)
	   {
	  	break;
	  }
}}
			 	
