#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node * head=NULL;;
void insertP(int item,int pos)
{
    struct node *newnode,*temp;
    int i=1;
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=NULL;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;

    
}
void display()
{
    struct node *temp=head;
	if(head==NULL)
	{
		printf("under flow");
	}else
	{
		while(temp!=NULL){
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}
void insertB(int x)
{
	struct node *temp=NULL;
	temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
	if(temp==NULL)
	{
		printf("memory not allocated");
	}
	else
	{
		if(head==NULL)
		{
			head =temp;
		}else
		{
			temp->next=head;
			head=temp;
		}
	}
	temp=NULL;
}
void insertE(int x)
{
	struct node *temp=NULL;
	struct node *loop=head;
	temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
	if(temp==NULL)
	{
		printf("memory not allocated");
	}
	else
	{
		if(head==NULL)
		{
			head=temp;
		}else
		{
			while(loop->next!=NULL)
			{
				loop=loop->next;
			}
			loop->next=temp;
		}
	}
	temp=NULL;
}
int main()
{
    int pos;
    insertB(1);
	insertB(12);
	insertB(3);
	insertE(24);
	display();
    
    scanf("%d",&pos);
    insertP(17,pos);
    display();
    
}