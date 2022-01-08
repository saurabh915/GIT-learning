#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
int length();
int main()
{
    while (1)
    {
        int num;
        printf("1.  randominsert()\n;");
        printf("2. void beginsert()\n;");
        printf("3. void lastinsert()\n;");
        printf("4. length\n");
        printf("5. display\n");
        printf("6. random delete\n");
        printf("7. begining delete\n");
           printf("8. last delete\n");
              printf("9. search\n");
                 printf("10. exit\n");
        printf("enter the choice");
        scanf("%d", &num);
        switch (num)
        {

        case 1:
            randominsert();
            break;
        case 2:
            beginsert();
            break;
        case 3:
             lastinsert();
            break;

        case 4:
            length();
            break;
        case 5:
            display();
            break;
        case 6:
            random_delete();
            break;
        case 7:
            begin_delete();
            break;
        case 8:
            last_delete();
            break;
        case 9:
            search();
            break;
        case 10:
            exit(1);
            break;
        }
    }
    return 0;
}
void randominsert()
{

    struct node *temp, *s,*n;
    int item, loc;
    int i = 1;
    temp = (struct node *)malloc(sizeof(struct node *));
    printf("enter the data\n");
    scanf("%d", &item);
    temp->data = item;
    printf("enter the location\n ");
    scanf("%d", &loc);
    
    s = head;
    while (i < loc)
    {
        s = s->next;
        i++;
    }
     n = s;
    s = temp;
    temp->next=n;
}

void beginsert()
{
    struct node *temp;
    int item;

    temp = (struct node *)malloc(sizeof(struct node *));
    printf("enter the data");
    scanf("%d", &item);
    temp->data = item;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        /* code */
    }
    else
    {
        struct node *p;
        p = head;
        head =temp;
        temp->next = p;
    }
}

void lastinsert()
{

    int item;
    struct node *ptr, *temp;
    temp = (struct node *)malloc(sizeof(struct node *));
    scanf("%d", &item);

    ptr = head;
    while (ptr != NULL)
    {
        ptr = ptr->next;
       
    }
    ptr->next= temp;
    temp->data = item;
    temp->next = NULL;
    
}

int length()
{
    int count = 1;
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    return count;
}
void begin_delete()
{
   struct node* temp;
   /*  temp=head;
    temp = temp ->next;*/
    temp = head->next;
    head->next;
}
void last_delete()
{
    int count = 1;
    struct node *temp;
    temp = head;
    while (count < length())
    {
        temp = temp->next;
        count++;
    }
    temp->next = NULL;
}
void random_delete()
{

    struct node *temp, *s;
    int item, loc;
    int i = 1;
    // temp = (struct node *)malloc(sizeof(struct node *));

    printf("enter the location\n ");
    scanf("%d", &loc);
    temp->next = NULL;
    s = head;
    while (i < loc-1)
    {
        s = s->next;
        i++;
    }
    temp = s->next;
     s->next =temp->next;

}
void display()
{
    int i=1;
    struct node *temp;
    temp = head;
    while (i<length())
    {
        
       
        printf(" %d\n", temp->data);
         temp = temp->next;
    }
}
void search()
{
    int item;
    struct node *temp;
    int count = 0;
    printf("enter the data you want to search:");
    scanf("%d", &item);
    while (temp->data != item)
    {
        temp = temp->next;
        count++;
    }
    printf("your data is at position %d", count);
}