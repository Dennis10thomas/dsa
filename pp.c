#include<stdio.h>
#include<stdlib.h>
int s[20],ele,top=-1,max;
void push()
{
	if(top==max-1)
	{
		printf("Stack is full");
	}
	else
	{
		printf("Enter the element to push: ");
		scanf("%d",&ele);
		s[++top]=ele;
		printf("The element pushed is: %d\n",ele);
	}
}

void pop()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("The element popped is: %d\n",s[top]);
		top--;
	}
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("The elements: ");
		for(i=0;i<=top;i++)
		{
			printf("%d\t",s[i]);
		}
	}
}	
	
void main()
{
	int ch;
	printf("Enter the maximum size: ");
	scanf("%d",&max);
	while(1)
	{
		printf(" \n1. Push \n 2. Pop \n 3. Display \n 4. Exit \n");
		printf("Enter the choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: push();
			break;
		case 2: pop();
			break;
		case 3: display();
			break;
		case 4: exit (0);
		default:
			printf("Invalid choice\n");
			break;
		}
	}
}
		
