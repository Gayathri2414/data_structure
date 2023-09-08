/*#include<stdio.h>
#include<stdlib.h>
void create();
void traverse();
void addList();
void insert_first();
void insert_last();
void insert_middle();
void delete_first();
void delete_middle();
void delete_last();
struct node
{
	int data;
	struct node *next;
};
struct node *head=0,*temp,*s,*temp1;
int count=0;
void insert_first()
{
	s=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the element(first):");
	scanf("%d",&(s->data));
	s->next=head;
	head=s;
	printf("\n AFTER INSERTING AT FIRST:");
	traverse();
}
int main()
{
	create();
	traverse();
	insert_first();
	insert_last();
	insert_middle();
	delete_first();
	delete_last();
	delete_middle();
}
void create()
{
	int n=1;
	while(n)
	{
	printf("do you want to enter:");
	scanf("%d",&n);
	if(n!=0)
	{
		s=(struct node*)malloc(sizeof(struct node));
		printf("enter the element:");
		scanf("%d",&(s->data));
		s->next=0;
		if(head==0)
		{
			addList();
		}
		else
		{
			addList();
		}
	}
}
}
void traverse()
{
	temp=head;
	printf("\n the elements are:");
	count=0;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		count++;
		temp=temp->next;
	}
	
}
void addList()
{
	if(head==0)
	{
		head=s;
		temp=head;
	}
	else
	{
		temp->next=s;
		temp=s;
	}
}
void insert_last()
{
	s=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the element(last):");
	scanf("%d",&s->data);
	temp=head;
	while(temp!=0)
	{
		temp=temp->next;
		if(temp!=0)
		temp1=temp;
	}
	temp1->next=s;
	s->next=0;
	printf("AFTER INSERTING AT LAST:");
	traverse();
}
void insert_middle()
{
	int mid,i=1;
	mid=count/2;
	temp=head;
	s=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the element(middle):");
	scanf("%d",&s->data);
    while(i<2)
    {
    	temp=temp->next;
    	i++;
	}
	s->next=temp->next;
	temp->next=s;
	printf("\n AFTER INSERTING AT MIDDLE:");
	traverse();
}
void delete_first()
{
	printf("\n AFTER DELETING THE FIRST ELEMENT:");
	temp=head;
	head=head->next;
	free(temp);
	traverse();
}
void delete_last()
{
	printf("\n AFTER DELETING THE LAST ELEMENT:");
	temp=head;
	while(temp->next!=0)
	{
		temp=temp->next;
		if(temp->next!=0)
		temp1=temp;
	}
	temp1->next=0;
	traverse();
}
void delete_middle()
{
	int mid,i=0;
	printf("\n AFTER DELETING THE MIDDLE ELEMENT:");
	temp=head;
	mid=count/2;
	temp=head;
	temp1=head;
	while(i<mid-1)
	{
	temp=temp->next;
	i++;	
	}
	i=0;
	while(i<mid)
	{
		temp1=temp1->next;
		i++;
	}
	temp->next=temp1->next;
	traverse();
}*/
#include<stdio.h>
#include<stdlib.h>
struct node* create(int num);
void addlist(struct node* s);
void traverse();
void insert_first();
void insert_last();
void insert_middle();
void delete_first();
void delete_last();
void delete_middle();
void delete_value();
struct node
{
    int data;
    struct node *next;
};
struct node *temp,*head=NULL;
int count;
int main()
{
    int num,n,i;
    struct node *s1;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the num:");
        scanf("%d",&num);
        s1=create(num);
        addlist(s1);

    }
    printf("the list is:");
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
void traverse()
{
    count=0;
    temp=head;
    while(temp!=NULL)
    {
      printf("%d",temp->data);
      temp=temp->next;
      count++;
    }

}
void insert_first()
{
    struct node *s;
    s=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the number to be inserted at first:");
    scanf("%d",&s->data);
    if(head==NULL)
    {
        head=s;
        s->next=NULL;
    }
    else
    {
        s->next=head;
        head=s;
    }
    printf("\n the list after insertion at first is:");
    traverse();
}
void insert_last()
{
    struct node *s;
    s=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the number to be inserted at last:");
    scanf("%d",&s->data);
    if(head==NULL)
    {
    	head=s;
    	s->next=NULL;
	}
	else
	{
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=s;
    s->next=NULL;
    printf("\n the list after insertion at last is:");
    traverse();
}}
void insert_middle()
{
    int mid,i=1;
    struct node *temp1;
    if(head==NULL)
    {
    	printf("the list is empty");
	}
	else
	{
    mid=count/2;
    temp=head;
    struct node *s;
    s=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the number to be inserted at middle:");
    scanf("%d",&s->data);
    while(i<mid)
    {
        temp=temp->next;
        i++;
    }
    s->next=temp->next;
    temp->next=s;
    printf("\n the list after insertion at middle:");
    traverse();
}}
void delete_first()
{
	if(head==NULL)
	{
		printf("the list is empty");
	}
	else
	{
    temp=head;
    head=head->next;
    free(temp);
    printf("\n list after deletion at first:");
    traverse();
}}
void delete_last()
{
	if(head==NULL)
	{
		printf("the list is empty");
	}
	else
	{
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    printf("\n list after deletion at last is");
    traverse();
}}
void delete_middle()
{
	int mid,i=0;
	struct node *temp1;
	temp=head;
	mid=count/2;
	temp1=head;
	while(i<mid-1)
	{
		temp=temp->next;
		i++;
	}
	i=0;
	while(i<mid)
	{
		temp1=temp1->next;
		i++;
	}
	temp->next=temp1->next;
	printf("\n list after deleting the middle element:");
	traverse();
}
void delete_value()
{
	if(head==NULL)
	{
		printf("the list is empty");
	}
	else
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
}}



