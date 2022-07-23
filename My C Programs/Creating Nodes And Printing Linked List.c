#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

void printNodes(struct node *ptr)
{
	while(ptr!=NULL)
	{
		printf("Element :%d\n",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
	struct node *insertatFirst(struct node *x,int n)
	{
		struct node *ptr=(struct node*)malloc(sizeof(struct node));
		
		ptr->next=x;
		ptr->data=n;
		return ptr;
	}
	
	 insertatIndex(struct node *head,int data,int index)
	{
		struct node *ptr=(struct node *)malloc(sizeof(struct node));
		struct node *p=head;
		int i=1;
		while(i!=index-1)
		{
			p=p->next;
			i++;
		}
		ptr=p->next;
		p=ptr;
		ptr->data=data;	
	}
	
		 insertatLast(struct node *head,int data)
	{
		struct node *ptr=(struct node *)malloc(sizeof(struct node));
		ptr->data=data;
		ptr->next=NULL;
		
		struct node *p=head;
		
		while(p->next!=NULL)
		{
			p=p->next;
		
		}
		    p->next=ptr;
			
  }
  
  
  insertAfter(struct node *previous,int n)
  {
  	struct node *ptr=(struct node *)malloc(sizeof(struct node));
  	
  	 ptr->data=n;
  	 
  	 ptr->next=previous->next;
  	 previous->next=ptr;	  
  }
  
  
int main()
{

    struct node *node1;
    struct node *node2;
    struct node *node3;
    struct node *node4;
    struct node *node5;
    
    node1=(struct node *)malloc(sizeof(struct node));
    node2=(struct node *)malloc(sizeof(struct node));
    node3=(struct node *)malloc(sizeof(struct node));
    node4=(struct node *)malloc(sizeof(struct node));
    node5=(struct node *)malloc(sizeof(struct node));

    node1->data=1;
    node1->next=node2;
    
     node2->data=2;
    node2->next=node3;
    
     node3->data=3;
    node3->next=node4;
    
     node4->data=4;
    node4->next=node5;
    
     node5->data=5;
    node5->next=NULL;
    
    printf("Before Inserting\n");
	printNodes(node1);
	printf("\n");
		
	printf("Inserting at first\n");
	node1=insertatFirst(node1,99);
	printNodes(node1);
	printf("\n");
	
	//Uncomment the function you want to call
	
//	printf("Inserting at index 2\n");
//   insertatIndex(node1,20,2);
//   printNodes(node1);
//   printf("\n");
    
//  printf("Inserting at last\n");
//   insertatLast(node1,55);
//  printNodes(node1);
//  printf("\n");
    
//  printf("Inserting after node 4\n");
//  insertAfter(node4,69);
//  printNodes(node1);
//	printf("\n");
	
	return 0;
}
