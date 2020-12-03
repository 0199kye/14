#include <stdio.h>
#include <stdlib.h>

struct linknode
{
	int data;
	
	linknode* next;
};

static struct linknode *list;

static struct linknode *create_node(int value)
{
	struct linknode* ptr;
	
	ptr = (struct linknode*)malloc(sizeof(struct linknode));
	
	ptr->data = value;
	ptr->next = NULL;
	
	return ptr;
}



int insert DataToTail(int value)
{
	struct linknode *nodePtr;
	struct linknode *srchPtr;
	
	nodePtr = create_node(value);
	if (nodePtr == NULL)
	{
		printf("memory allocation error!\n");
		return -1;
	}
	
	if (list ==NULL)
	{
		list = nodePtr;
	}
	
	else
	{
		srchPtr = list;
		while (srchPtr->next != NULL)
		{
			srchPtr = (struct linknode*)srchPtr->next;
		}
		srchPtr->next= nodePtr;
	}
	return 0;
}

void print_list(void)
{
	struct linknode *ptr = list;
	int i = 0;
	while (ptr != NULL)
	{
		if (i == n)
		{
			printf("%i'th data : %i\n", i, ptr->data);
		}
		i++;
		ptr = ptr->next;
	}
	printf("no data\n");
}
