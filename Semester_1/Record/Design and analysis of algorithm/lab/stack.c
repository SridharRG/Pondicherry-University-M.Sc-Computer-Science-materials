#include<stdio.h>
#define MAXSIZE 200
int stack[MAXSIZE], top=0;
void main()
{
void push();
void pop();
void display();
void search();
void topele();
void size();
void check();
void clear();
int i, ch=1, num;
do
{
printf("\nSTACK OPERATIONS");
printf("\n1.PUSH ITEM");
printf("\n2.POP ITEM");
printf("\n3.DISPLAY ITEM");
printf("\n4.SEARCHING POSITION");
printf("\n5.TOP ELEMENT OF STACK");
printf("\n6.SIZE OF STACK");
printf("\n7.CHECK STACK IS EMPTY OR NOT");
printf("\n8.CLEAR STACK");
printf("\n9.EXIT");
printf("\nENTER YOUR CHOICE:");
scanf("%d",&ch);
switch(ch)
{
case 1:
		push();
		break;
case 2:
		pop();
		break;
case 3:
		display();
		break;
case 4:
		search();
		break;
case 5:
		topele();
		break;


case 6:
		size();
		break;
case 7:
		check();
		break;
case 8:
		clear();
		break;
case 9:
		break;
default:
printf("PLEASE ENTER VALUE BETWEEN 1 AND 9\n");
}
}while(ch!=9);
}

void display()
{
int i,count=0;
if(top==0)
{
printf("\n			STACK IS EMPTY");
}
else
{
for(i=1;i<=top;i++)
{
count++;
}
printf("\n THE NO OF ELEMENTS IN THE STACK IS:%d",count);
printf("\n THE STACK ELEMENTS ARE:\n");
for(i=1;i<=top;i++)
{
printf("\t\t\t\t");
printf("%d\t\t\t\t\n",stack[i]);
}
}
}

void push()
{
int y;
printf("\n ENTER THE VALUE TO PUSH:");
scanf("%d",&y);
if(top>MAXSIZE)
{
printf("	STACK IS FULL");
}
else
{
top++;
stack[top]=y;
printf("	  %d HAS BEEN ADDED",y);
}
}

void pop()
{
int a;
if(top<=0)
{
printf("	STACK IS EMPTY");
}
else
{
a=stack[top];
top--;
printf("	ELEMENT DELETED BY POP FUNCTION IS %d",a);
}
}

void search()
{
int i,k,f=1;
printf("\n ENTER THE ELEMENT TO SEARCH:");
scanf("%d",&k);
for(i=1;i<=top;i++)
{
if(k==stack[i])
{
printf("\n ELEMENT %d IS IN THE POSITION %d",k,i);
f=2;
}
}
if(f==1)
printf("\nTHE ENTERED ELEMENT IS NOT IN ARRAY");
}

void topele()
{
int i;
i=stack[top];
printf("\n TOP ELEMENT OF THE STACK:%d",i);
}


void size()
{
int i,count=0;
for(i=1;i<=top;i++)
{
count++;
}
printf("\n THE STACK SIZE:%d",count++);
}

void check()
{
if(top<=0)
printf("\n STACK IS EMPTY");
else
printf("\n STACK IS NOT EMPTY");
}

void clear()
{
top=0;
printf("\n STACK IS CLEARED");
}