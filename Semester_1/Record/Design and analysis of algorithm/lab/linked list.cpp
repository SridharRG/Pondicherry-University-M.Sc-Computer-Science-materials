#include<iostream>
#include<stdlib.h>
#include<cstdlib>  
struct node
{
    int data;
    struct node* link;
};
struct node* head = NULL;
struct node* temp = NULL;
int  count=0;


void insertion();
void deletion();
void infirst();
void inlast();
void inpos();
void delfirst();
void dellast();
void delpos();
void display();
void display1();
void search();
void editposition();
void sorting();
void assort();
void dessort();
void creation();

int  value();

inline void insertsuc()
{
    std::cout << "\nInsertion Successful.";
    count++;
    std::cin.ignore(); 
}

inline void deletesuc()
{
    std::cout << "\nDeletion Successful.";
    count--;
    std::cin.ignore(); 
}


int main()
{
    int ch = 0;
    system("clear"); 
    do
    {
        system("clear");

        if (count == 0)
        {
            std::cout << "\nList is Empty";
            std::cout << "\n\t\tSingly Linked List Operations";
            std::cout << "\n1.Create a node";
            std::cout << "\n2.Exit";
            std::cout << "\nEnter your Choice:";
            std::cin >> ch;
            if (ch == 1)
                creation();
            else if (ch == 2)
                exit(0);
            else
            {
                std::cout << "\nInvalid Input";
                std::cin.ignore(); 
            }
        }
        else
        {
            std::cout << "\n\tSingly Linked List Operations\n";
            std::cout << "\n1.Insertion";
            std::cout << "\n2.Deletion";
            std::cout << "\n3.Display";
            std::cout << "\n4.Search";
            std::cout << "\n5.Position Editing";
            std::cout << "\n6.Sorting";
            std::cout << "\n7.Exit";
            std::cout << "\nEnter your Choice : ";
            std::cin >> ch;
            switch (ch)
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
                search();
                break;
            case 5:
                editposition();
                break;
            case 6:
                sorting();
                break;
            case 7:
                break;
            default:
                std::cout << "\nInvalid choice";
            }
        }
    } while (ch != 7);

    return 0;
}


void creation()
{
    head = (struct node*)malloc(sizeof(struct node));
    head->data = value();
    head->link = NULL;
    count = 1;
}

void insertion()
{
    int ch;
    do
    {
        system("clear");
        std::cout << "Insert Operations";
        std::cout << "\n1.Insert at first";
        std::cout << "\n2.Insert at last";
        std::cout << "\n3.Insert at specified position";
        std::cout << "\n4.Exit";
        std::cout << "\n\nEnter your Choice : ";
        std::cin >> ch;
        switch (ch)
        {
        case 1:
            infirst();
            break;
        case 2:
            inlast();
            break;
        case 3:
            inpos();
            break;
        case 4:
            break;
        default:
            std::cout << "\nInvalid choice";
        }
    } while (ch != 4);
}

int value()
{
    int y;
    std::cout << "\nEnter the value : ";
    std::cin >> y;
    return (y);
}

void infirst()
{
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value();
    temp->link = head;
    head = temp;
    insertsuc();
}

void inlast()
{
    struct node* p = NULL;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value();
    p = head;
    while (p->link != NULL)
        p = p->link;
    p->link = temp;
    temp->link = NULL;
    insertsuc();
}

void inpos()
{
    struct node* p = NULL;
    temp = (struct node*)malloc(sizeof(struct node));
    int pos = 0; 
    std::cout << "\nEnter the position : ";
    std::cin >> pos;
    if (pos <= count && pos > 0)
    {
        if (pos == 1)
            infirst();
        else
        {
            temp->data = value();
            p = head;
            for (int i = 1; i < pos - 1; i++)
                p = p->link;
            temp->link = p->link;
            p->link = temp;
            insertsuc();
        }
    }
    else if (pos == count + 1)
        inlast();
    else
    {
        std::cout << "\nPosition you entered is wrong";
        std::cin.ignore(); 
    }
}


void deletion()
{
    int ch;
    do
    {
        system("clear");
        std::cout << "Delete Operations";
        std::cout << "\n1.Delete at first";
        std::cout << "\n2.Delete at Last ";
        std::cout << "\n3.Delete at Specify Position";
        std::cout << "\n4.Exit";
        std::cout << "\n\nEnter your Choice : ";
        std::cin >> ch;
        switch (ch)
        {
        case 1:
            delfirst();
            break;
        case 2:
            dellast();
            break;
        case 3:
            delpos();
            break;
        case 4:
            break;
        default:
            std::cout << "\nInvalid choice";
        }
        if (count == 0)
            ch = 4;
    } while (ch != 4);
}


void delfirst()
{
    struct node* p = NULL;
    p = head;
    head = head->link;
    std::cout << "\n" << p->data << " Is Deleted";
    free(p);
    deletesuc();
}


void dellast()
{
    struct node* p = NULL;
    temp = NULL;
    if (count == 1)
        delfirst();
    else
    {
        p = head;
        while ((p->link)->link != NULL)
            p = p->link;
        temp = p->link;
        p->link = NULL;
        std::cout << "\n" << temp->data << " Is Deleted";
        free(temp);
        deletesuc();
    }
}

void delpos()
{
    int pos;
    struct node* p = NULL;
    std::cout << "\nEnter the position : ";
    std::cin >> pos;
    if (pos == 1)
        delfirst();
    else if (pos == count)
        dellast();
    else if (pos < count && pos > 1)
    {
        p = head;
        for (int i = 1; i < pos - 1; i++)
            p = p->link;
        temp = p->link;
        p->link = temp->link;
        std::cout << temp->data << " Is Deleted";
        free(temp);
        deletesuc();
    }
    else
    {
        std::cout << "\nPosition you entered wrong";
        std::cin.ignore(); 
    }
}


void display()
{
    struct node* p = NULL;
    p = head;
    std::cout << "\nList: ";
    while (p->link != NULL)
    {
        std::cout << "\t" << p->data;
        p = p->link;
    }
    std::cout << "\t" << p->data;
    std::cout << "\nNo of nodes: " << count;
    std::cin.ignore(); 
}


void display1()
{
    struct node* p = NULL;
    p = head;
    std::cout << "\nList:";
    while (p->link != NULL)
    {
        std::cout << "\t" << p->data;
        p = p->link;
    }
    std::cout << "\t" << p->data;
    std::cin.ignore(); 
}



void search()
{
    int x, no = 0, pos = 0;
    temp = head;
    std::cout << "\nEnter searching element: ";
    std::cin >> x;
    while (temp->link != NULL || (pos + 1) == count)
    {
        if (x == temp->data)
        {
            std::cout << "\nSearching element position: " << pos + 1;
            no++;
        }
        temp = temp->link;
        pos++;
    }
    if (no != 0)
        std::cout << "\nNumber of times searching element occurred: " << no;
    else
        std::cout << "\nIt did not occur anywhere in the list";
    std::cin.ignore(); 
}


void editposition()
{
    int pos = 0, x = 0;
    temp = NULL;
    std::cout << "\nEnter the position : ";
    std::cin >> pos;
    if (pos > 0 && pos <= count)
    {
        std::cout << "\nEnter the new value: ";
        std::cin >> x;
        temp = head;
        for (int i = 1; i < pos; i++)
            temp = temp->link;
        temp->data = x;
        std::cout << "\nSuccessfully edited";
    }
    else
        std::cout << "\nEntered position does not exist";
    std::cin.ignore(); 
}


void sorting()
{
    int ch;
    do
    {
        system("clear");
        std::cout << "\n1.Ascending sorting";
        std::cout << "\n2.Descending sorting";
        std::cout << "\n3.Exit";
        std::cout << "\nEnter your choice:";
        std::cin >> ch;
        switch (ch)
        {
        case 1:
            assort();
            break;
        case 2:
            dessort();
            break;
        case 3:
            break;
        default:
            std::cout << "\nInvalid choice";
        }
    } while (ch != 3);
}


void assort()
{
    temp = NULL;
    struct node *p = NULL, *q = NULL;
    int min = 0, pos = 0;
    temp = head;
    q = head;
    for (int i = 1; i <= count; i++)
    {
        min = temp->data;
        pos = i;
        p = temp->link;
        for (int j = i + 1; j <= count; j++)
        {
            if (min > (p->data))
            {
                min = p->data;
                pos = j;
            }
            p = p->link;
        }
        q = head;
        for (int k = 1; k < pos; k++)
            q = q->link;
        q->data = temp->data;
        temp->data = min;
        temp = temp->link;
    }
    std::cout << "\nAscending sorted list";
    display1();
}


void dessort()
{
    temp = NULL;
    struct node *p = NULL, *q = NULL;
    int min = 0, pos = 0;
    temp = head;
    q = head;
    for (int i = 1; i <= count; i++)
    {
        min = temp->data;
        pos = i;
        p = temp->link;
        for (int j = i + 1; j <= count; j++)
        {
            if (min < (p->data))
            {
                min = p->data;
                pos = j;
            }
            p = p->link;
        }
        q = head;
        for (int k = 1; k < pos; k++)
            q = q->link;
        q->data = temp->data;
        temp->data = min;
        temp = temp->link;
    }
    std::cout << "\nDescending order sorted list:";
    display1();
}
