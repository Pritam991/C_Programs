/*Doubly LinkedList: Create & Traverse*/
#include<stdio.h>
#include<conio.h>
int main()
{

    struct Node
    {
        Node *preAddr;
        int Data;
        Node *postAddr;
    } * Head, *temp, *Runner;
    Head = NULL;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        if (Head == NULL)
        {
            Head = new Node;
            Head->preAddr = NULL;
            Head->postAddr = NULL;
            printf("Enter Data");
            scanf("%d", &Head->Data);
            Runner = Head;
        }
        else
        {
            temp = new Node;
            printf("Enter Data");
            scanf("%d", &temp->Data);
            temp->preAddr = Runner;
            Runner->postAddr = temp;
            temp->postAddr = NULL;
            Runner = Runner->postAddr;
        }
        printf("Do you continue?Y/y for continue any other key to stop");
        scanf("%c", &ch);
        scanf("%c", &ch);
    }
    printf("Elements of the doubly linked list are:\n");
    Runner = Head;
    while (Runner != NULL)
    {
        printf("%d\t", Runner->Data);
        Runner = Runner->postAddr;
    }
    getch();
}