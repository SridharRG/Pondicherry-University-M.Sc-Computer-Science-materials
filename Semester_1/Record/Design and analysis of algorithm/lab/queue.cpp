#include<stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE],front=0,rear=0;
int main()
{
    void insertion();
    void deletion();
    void display();
    void search();
    void count();
    void pos();
    void ele();
    int i,ch=1;
    do
    {
        printf("\n QUEUE OPERATIONS");
        printf("\n1.INSERT ITEM");
        printf("\n2.DELETE ITEM");
        printf("\n3.DISPLAY ITEM");
        printf("\n4.SEARCHING POSITION");
        printf("\n5.SEARCHING ELEMENT");
        printf("\n6.COUNTING");
        printf("\n7.EXIT");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insertion();
            break;
            case 2:
            deletion();
            break;
            case 3:
            display();
            break;
            case 4:
            pos();
            break;
            case 5:
            ele();
            break;
            case 6:
            count();
            break;
            case 7:
            break;
            default:
            printf("\n invaid operation");
        }
    }while(ch!=7);
}
void display()
{
    int i,count=0;
    for(i=front+1;i<=rear;i++)
    {
        count++;
    }
    printf("\n THE NO OF ELEMENTS IN THE QUEUE IS %d",count);
    printf("\n THE QUEUE ELEMENTS ARE:");
    for(i=front+1;i<=rear;i++)
    {
        printf("%d,queue[i]");
    }
}
void insertion()
{
    int item;
    if(rear==MAXSIZE)
    {
        printf("QUEUE IS FULL");
        return;
    }
    else
    {
        rear=rear+1;
        printf("/n ENTER THE VALUE TO INSERT:");
        scanf("%d",& item);
        printf("%d HAS BEEN INSERTED",item);
    }
}
    void deletion()
    {
        int item;
        if(front==rear)
        {
            printf("QUEUE IS EMPTY");
        }
        else
        {
            front=front+1;
            item=queue[front];
            printf("THE ITEM %d HAS BEEN DELETED",item);
        }
    }
    void pos()
    {
        int i,k,f=1;
        printf("/n ENTER THE ELEMENT TO SEARCH THE POSITION:");
        scanf("%d",&k);
        for(i=front+1;i<=rear;i++)
        {
            if(k==queue[i])
            {
                printf("/n ELEMENT %d IS IN THE POSITION %d",k,i);
                f=2;
            }
        }
        if(f==1)
        printf("\n THE ENTERED ELEMENT IS NOT IN QUEUE:");
    
    }
    void ele()
    {
    	
        int i,k,f=1;
        printf("/n ENTER THE POSITION TO SEARCH THE ELEMENT:");
        scanf("%d",&k);
        for(i=front+1;i<=rear;i++)
        {
            if(k==i)
            {
                printf("\n %d IS THE ELEMENT WHICH IS IN THE POSITION %d",queue[i],k);
                f=2;
            }
        }
        if(f==1)
        printf("/n THE POSITION YOU ENTERED IS WRONG");
        
    }
    void count()
    {
        int k,i,count=0;
        printf("\n ENTER THE ELEMENT:");
        scanf("%d",&k);
        for(i=front+1;i<=rear;i++)
        {
            if(k==queue[i])
            count++;
        }
        printf("THE ELEMENT %d IS PRESENT %d TIMES IN QUEUE",k,count);
        scanf("%d",&k);
    }
