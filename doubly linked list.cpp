//using enum function
/*#include<stdio.h>
//#include<stdlib.h>
enum color{red,blue,orange,pink};
int main()
{
enum color x;
x=blue;
printf("%d",x);	
}


//using typedef function
#include<stdio.h>
int main()
{
	typedef int hai;
	hai i=9;
	printf("%d",i);
}

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node stn;
stn *head=NULL,*temp=NULL;
void addList(stn* s1);
stn* create();
int traverse();
void insert_first();
void insert_middle(int count);
void del_ele();
void reverse();
int main()
{
  int i,n,num,count;
  stn *s1;
  printf("enter the n:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
	s1=create();
    addList(s1);
  }
  count=traverse();
  insert_first();
  insert_middle(count);
  del_ele();
  reverse();
}
stn* create()
{
	stn *s;
  	printf("enter the element:");
  	s=(stn*)malloc(sizeof(stn));
  	scanf("%d",&s->data);
  	return s;
}
void addList(stn* s1)
{
	
	if(head==0)
	{
		head=s1;
		temp=head;
	}
	else
	{
		temp->next=s1;
		temp=temp->next;
	}
	temp->next=NULL;
}
int traverse()
{
	int count=0;
	temp=head;
	printf("the elements are:");
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		count++;
		temp=temp->next;
	}
	return count;
}
void insert_first()
{
	stn *s1;
	s1=(stn*)malloc(sizeof(stn));
	printf("\n ele insert:");
	scanf("%d",&s1->data);
	temp=head;
    s1->next=temp;
    head=s1;
    printf("after insertion:");
    traverse();
}
void insert_middle(int count)
{
	int mid,i;
	mid=count/2;
	temp=head;
	stn *s1;
    s1=(stn*)malloc(sizeof(stn));
	printf("\n enter mid insert:");
	scanf("%d",&s1->data);
	for(i=0;i<mid;i++)
	{
		temp=temp->next;
	}
	s1->next=temp->next;
	temp->next=s1;
	printf("\n after insert:");
	traverse();
}
void del_ele()
{
	int num;
	stn *temp1;
	printf("\n enter the ele for del:");
	scanf("%d",&num);
	temp=head;
	temp1=NULL;
	while(temp!=0)
	{
		if(temp->data==num)
		{
			temp1->next=temp->next;
			break;
		}
		else
		{
		 if(temp1==NULL)
		 {
		   temp1=head;
	     }
		 else
		 {
		   temp1=temp1->next;
	     }
		}
		temp=temp->next;
	}
	printf("\n after deleteing:");
	traverse();
}
void reverse()
{
	stn *pre=NULL,*cur=NULL,*next_n=NULL;
	pre=0;
	cur=next_n=head;
   while(next_n!=0)
   {
   	next_n=next_n->next;
   	cur->next=pre;
   	pre=cur;
   	cur=next_n;
   }
   head=pre;
   printf("\n after reverse:");
   temp=head;
   while(temp!=0)
   {
   	printf("%d",temp->data);
   	temp=temp->next;
   }
}


//doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *pre;
};
typedef struct node stn;
stn *head=NULL,*last=NULL;
int main()
{
	int i,n;stn *temp;
	stn *s;
  printf("enter the n:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	s=(stn*)malloc(sizeof(stn));
  	printf("enter the element:");
  	scanf("%d",&s->data);
  	if(head==NULL)
  	{
  	head=s;
	last=head;	
	last->next=NULL;
	last->pre=NULL;
	}
	else
	{
	last->next=s;
	s->pre=last;
		
	}
	last=s;
	last->next=NULL;
  }
  
  temp=last;
  while(temp!=NULL)
  {
  	printf("%d",temp->data);
  	temp=temp->pre;
  }
}*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *pre;
};
typedef struct node stn;
stn *head=NULL,*last=NULL;
int count;
stn* create(int num);
void addList(stn *s1);
void traverse();
void reverse();
void insert_first();
void insert_last();
void insert_middle();
void delete_first();
void delete_last();
void delete_middle();
void delete_element();
int main()
{
	stn *s1;
	int i,num,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element:");
		scanf("%d",&num);
		s1=create(num);
		addList(s1);
	}
	traverse();
	reverse();
	insert_first();
	insert_last();
	insert_middle();
	delete_first();
	delete_last();
	delete_middle();
	delete_element();
}
stn* create(int num1)
{
	stn *s;
	s=(stn*)malloc(sizeof(stn));
	s->data=num1;
	s->next=NULL;
	s->pre=NULL;
}
void addList(stn* s1)
{
	if(head==NULL)
	{
		head=s1;
		last=head;
	}
	else
	{
		s1->pre=last;
		last->next=s1;
		last=last->next;
	}
	last=s1;
	last->next=NULL;
}
void traverse()
{
	stn *temp;
	printf("\n the list is:");
	temp=head;
	count=0;
  while(temp!=NULL)
  {
  	printf("%d",temp->data);
  	temp=temp->next;
  	count++;
  }
}
void reverse()
{
	stn *temp;
  	printf("\n the reverse order of list is:");
	temp=last;
  while(temp!=NULL)
  {
  	printf("%d",temp->data);
  	temp=temp->pre;
  }
}
void insert_first()
{
	stn* s;
	s=(stn*)malloc(sizeof(stn));
	printf("\n enter the num insert at first:");
	scanf("%d",&s->data);
	s->next=head;
	head->pre=s;
	s->pre=NULL;
	head=s;
	printf("\n the list after insertion at first is:");
	traverse();
}
void insert_last()
{
	stn* s;
	s=(stn*)malloc(sizeof(stn));
	printf("\n enter the num to insert at last:");
	scanf("%d",&s->data);
	last->next=s;
	s->pre=last;
	s->next=NULL;
	last=s;
	printf("\n the list after insertion at last is:");
	traverse();
}
void insert_middle()
{
	stn *s,*temp,*temps;
	int i,mid;
	s=(stn*)malloc(sizeof(stn));
	printf("\n enter the num to insert at middle:");
	scanf("%d",&s->data);
	mid=count/2;
	temp=head;
	for(i=0;i<mid;i++)
	{
		temp=temp->next;
	}
	s->pre=temp->pre;
	temps=temp->pre;
	s->next=temp;
	temp->pre=s;
	temps->next=s;
	printf("\n the list after insertion at middle is:");
	traverse();
	
}
void delete_first()
{
	stn *temp;
	temp=head;
	head=head->next;
	head->pre=NULL;
	free(temp);
	printf("\n the list after deletion at first is:");
	traverse();
}
void delete_last()
{
	stn *temp;
	temp=last;
	last=last->pre;
	last->next=NULL;
	free(temp);
	printf("\n the list after deletion at the last is:");
	traverse();
}
void delete_middle()
{
	int mid,i;stn *temp;
	mid=count/2;
    temp=head;
	for(i=0;i<mid;i++)
	{
		temp=temp->next;
	}
	temp->pre->next=temp->next;
	temp->next->pre=temp->pre;
	free(temp);
	printf("\n the list after deletion at the middle is:");
	traverse();
}
void delete_element()
{
	int num;
	stn *temp;
	printf("\n enter the element to delete:");
	scanf("%d",&num);
	temp=head;
	while(temp!=0)
	{
		if(head->data==num)
		{
			delete_first();
			break;
		}
		else if(temp->data==num)
		{
			temp->pre->next=temp->next;
			temp->next->pre=temp->pre;
			break;
		}
		else if(last->data==num)
		{
			delete_last();
			break;
		}
		else
		{
			temp=temp->next;
		}
	}
	printf("\n the list after deletion of the given value is:");
	traverse();
}
















