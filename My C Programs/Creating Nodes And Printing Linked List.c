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
	
	printNodes(node1);
	
	return 0;
}
