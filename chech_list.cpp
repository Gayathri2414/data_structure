#include<stdio.h>
#include<stdlib.h>
struct node* create(int num);
void addlist(struct node *s);
void traverse();
struct node
{
	int data;
	struct node *next;
};
struct node *temp,*head;
int count=0;
int main()
{
	int num,n,i,j,c=0;
    struct node *s1,*temp_add,*temp1;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the num:");
        scanf("%d",&num);
        s1=create(num);
        if(i==2)
        {
        	temp_add=s1;
		}
        addlist(s1);
    }
    s1->next=temp_add;
    temp=head;
    for(i=0;i<n;i++)
    {
    	temp1=temp->next;
    	for(j=i+1;j<n;j++)
    	{
    	if(temp==temp1->next)
         {
         	printf("the circular linked list points the %d node",i+1);
         	c=1;
         	break;
		 }
       temp1=temp1->next;
    }
    if(c==1)
    {
    	break;
	}
	temp=temp->next;
    }
}
struct node* create(int num)
{
    struct node *s;
    s=(struct node*)malloc(sizeof(struct node));
    s->data=num;
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
