#include<stdio.h>
#include<stdlib.h>
int triplet(int *b,int value,int n);
int main()
{
	int *a;int n,i,value,j,k,c=0,ans;
	printf("enter n:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the value:");
	scanf("%d",&value);
	triplet(a,value,n);
}
int triplet(int *b,int value,int n)
{
	int i,j,k,c=0;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if((*(b+i)+*(b+j)+*(b+k))==value)
				{
					printf("the triplet is(%d,%d,%d)",b[i],b[j],b[k]);
					c=1;
					return true;
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
	if(c!=1)
	return false;
}
