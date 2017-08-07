#include <stdio.h>
#define MAXSIZE 10

int queue[MAXSIZE];
int front,rear;

int isFull()
{ //returns 1 if stack is full else -1
	return (rear==(MAXSIZE-1));
}

int isEmpty()
{//returns 1 if stack is full else -1
		return (rear==-1 && front==-1;)
}

int peek()
{//returns the element at the top of the stack
	return queue[front];
}

void insert(int d)
{
	if(isFull())
	{
		printf("queue is full");
		return;
	}
	else
	{	rear++;
		queue[rear]=d;
			if(front==-1)
				front++;
	}
	printf("Element successfully inserted");
}

void Delete()
{
	if(isEmpty())
	{
		printf("Queue is empty");
		return;
	}
	else
	{
		d=queue[front];
			if(front==rear)
			{
				front=-1;
				rear=-1;
			}
			else
			{
				front++;
			}
			
	}	
}

int main()
{
    int ch,e;
    do
    {
        printf("\n\tMENU\n1.PEEK\n2.POP\n3.PUSH\n4.EXIT\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("the topmost element is:%d",peek());
                   break;
            case 2:pop();
                   break;
            case 3:printf("\nenter the element to be pushed:");
                   scanf("%d",&e);
                   push(e);
                   break;
            case 4:return 0;
        }
    }while(1);
    return 0;
}




