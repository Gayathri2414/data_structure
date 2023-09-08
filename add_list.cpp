#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node* create(int num);
void addlist(struct node *s);
void traverse();
struct node
{
	int data;
	struct node *next;
};
struct node *head,*temp;
int main()
{
	int num,n,i,j,sum=0,rem,count,value,ans=0;
    struct node *s1;
    for(i=0;i<2;i++)
    {
    printf("enter n:");
    scanf("%d",&n);
    ans=0;
    head=NULL;
    for(j=0;j<n;j++)
    {
        printf("enter the num:");
        scanf("%d",&num);
        s1=create(num);
        addlist(s1);

    }
    temp=head;
    while(temp!=NULL)
    {
    	value=temp->data;
    	count=0;
		while(value!=0)
      {
      	rem=value%10;
      	count++;
      	value=value/10;
	  }
      ans=(ans*pow(10,count))+temp->data;
      temp=temp->next;
    }  
	sum=sum+ans; 
}
if(i==2)
{
printf("the sum is  %d",sum);
}
}
struct node* create(int num)
{
    struct node *s;
    s=(struct node*)malloc(sizeof(struct node));
    s->data=num;
    s->next=NULL;
    return s;
}
void addlist(struct node *s)
{
    if(head==NULL)
    {
        head=s;
        temp=s;
    }
    else
    {
        temp->next=s;
        temp=temp->next;
    }

}
