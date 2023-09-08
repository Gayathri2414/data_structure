//peak element
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,c=0;
	int *a;
	printf("enter the value of n:");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			if(a[i]>a[i+1])
			{
				printf("the index of the peak element is %d",i);
				c=1;
				break;
			}
		}
		else if(i==(n-1))
		{
		   if(a[i]>a[i-1])
			{
				printf("the index of the peak element is %d",i);
				c=1;
				break;
			}	
		}
		else
		{
			if(a[i]>a[i-1] && a[i]>a[i+1])
			{
				printf("the index of the peak element is %d",i);
				c=1;
				break;
			}	
		}
	}
	if(c==0)
	{
		printf("there is no element");
	}
}


//max and min
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	int i,j,temp,n;
	printf("enter n:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("the max element is %d",a[0]);
	printf("\n the min element is %d",a[n-1]);
}


//reverse of array
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	int i,j,temp,n;
	printf("enter n:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&i[a]);
	}
	i=0;
	j=n-1;
	while(i<=j)
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	i++;
	j=j-1;	
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

//kth largest and kth smallest element
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,n,c=0,temp;
	int *p;
	printf("enter n:");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
    printf("enter k(less than n):");
    for(i=0;i<3;i++)
    {
    	scanf("%d",&k);
    	if(k<n)
    	{
        break;
        }
        else
        {
        	printf("k should be less than %d",n);
		}
    }
    printf("enter the elements of the array:");
    for(i=0;i<n;i++)
	{
		c=0;
	scanf("%d",(p+i));
	{
	if(i>0)
	{
		for(j=0;j<=i-1;j++)
		{
			//printf("**%d %d",p[j],p[i]);
			if(p[j]==p[i])
			{
				c=1;
				break;
			}
	     }
		if(c==1)
		{
			printf("do not enter repeating elements");
            i=i-1;
		}
	
	}}	
	}
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(p[i]>p[j])
    		{
    			temp=p[i];
    			p[i]=p[j];
    			p[j]=temp;
			}
		}
}
	printf("the %d th smallest element is %d",k,p[k-1]);
	printf("\n the %d th largest element is %d",k,p[n-k]);
}


//occurance of a num
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	int i,j,count=0,n,num;
	printf("enter n:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&i[a]);
	}
	printf("enter the number:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(*(a+i)==num)
		{
			count++;
		}
	}
	printf("the occurance of %d id %d",num,count);

}
//move negative elements one side
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	int i,j,temp,n,m=0,o=0,p=0;
	printf("enter n:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	while(o<n)
	{
		p=0;
	  if(a[i]<0)
	  {
	  	m=i;
	  	temp=a[i];
	  	for(j=i+1;j<n;j++)
	  	{
	  	a[m]=a[j];
	  	m++;
	  	p++;
	    }
	   a[n-1]=temp; 
	  }
	  if(p==0)
	  {
	  	i++;
	  }
	  o++;
	}
	//o->just to find the end of the loop
	//i should be incremented only when the shift not happen(because if the shift happened then the new element will come to its place)
	//p->to check whether the program went inside the loop
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	}
*/
//one cyclic rotation(bring last value to first)
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i,temp;
	printf("enter n:");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
	for(i=n-1;i>=0;i--)
	{
		temp=a[n];
		a[i+1]=a[i];
	}
	a[0]=temp;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}











	
	
