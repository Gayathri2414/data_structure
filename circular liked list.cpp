#include<stdio.h>
#include<stdlib.h>
struct node* create(int num);
void addlist(struct node *s1);
void traverse();
void insert_first();
void insert_last();
void delete_first();
void delete_last();
void insert_middle();
void delete_middle();
void delete_value();
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*temp=NULL;
int count=0;
int main()
{
	struct node *s1;
	int num,n,i;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter the num:");
	scanf("%d",&num);
	s1=create(num);
	addlist(s1);
}
	traverse();
	insert_first();
	insert_last();
	insert_middle();
	delete_first();
	delete_last();
	delete_middle();
	delete_value();
}
struct node* create(int num)
{
	struct node *s;
	s=(struct node*)malloc(sizeof(struct node));
	s->data=num;
	s->next=NULL;
	return s;
}
void addlist(struct node *s1)
{
	
	if(head==NULL)
	{
		head=s1;
		temp=s1;
	}
	else
	{
		temp->next=s1;
		temp=temp->next;
		temp->next=head;
	}
}
void traverse()
{
	temp=head;
	count=1;
	while(temp->next!=head)
	{
		printf("%d",temp->data);
		temp=temp->next;
		count++;
	}
	printf("%d",temp->data);
}
void insert_first()
{
	struct node *s;
	temp=head;
	printf("\n enter the element to insert(first)");
	s=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&s->data);

	while(temp->next!=head)
	{
		temp=temp->next;
	}
	temp->next=s;
	s->next=head;
	head=s;
	printf("\n after insertion at first:");
	traverse();
}
void insert_last()
{
	struct node *s;
	printf("\n enter the element to insert(last)");
	s=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&s->data);
    temp=head;
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	temp->next=s;
	s->next=head;
	printf("\n after insertion at last:");
	traverse();
}
void delete_first()
{
	temp=head;
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	temp->next=head->next;
	head=head->next;
	printf("\n after deletion at first:");
	traverse();
}
void delete_last()
{
	temp=head;
	while(temp->next->next!=head)
	{
		temp=temp->next;
	}
	temp->next=head;
	printf("\n after deletion at last:");
	traverse();
	
}
void insert_middle()
{
	int i=1,mid;
	struct node *s;
	mid=count/2;
	temp=head;
	while(i<mid)
	{
		temp=temp->next;
		i++;
	}
	s=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the element to insert in middle:");
	scanf("%d",&s->data);
	s->next=temp->next;
	temp->next=s;
	printf("\n list after insertion at middle:");
	traverse();
	
}
void delete_middle()
{
	struct node *temp1;
	int i=1,mid;
	temp=head;
	temp1=head;
	mid=count/2;
	while(i<mid-1)
	{
		temp=temp->next;
		i++;
	}
	i=1;
	while(i<mid)
	{
		temp1=temp1->next;
		i++;
	}
	temp->next=temp1->next;
	printf("\n list after deletion at middle:");
	traverse();
}
void delete_value()
{
	 int num,i=0;
    struct node *temp1;
    printf("\n enter the value to be deleted:");
    scanf("%d",&num);
    temp=head;
    temp1=head;
    while(temp!=NULL)
    {
        if(head->data==num)
        {
            delete_first();
            break;
        }
        else if(temp->data==num)
        {
          temp1->next=temp->next;
          break;
        }
        temp=temp->next;
        if(i>=1)
        {
            temp1=temp1->next;
        }
        i++;
    }
    printf("\n list after deleting the given value:");
    traverse();
}
