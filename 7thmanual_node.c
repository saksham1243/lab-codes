/*#include <stdio.h>
#include <stdlib.h>

// node structure
struct Node
{
    int data;
    struct Node *next;
};

// functions to create a new code
struct Node *createNode(int data)
{

    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    if (newnode == NULL)
    {
        printf("memory allocation failed..\n");
        exit(1);
    }
    newnode->data = data;
    newnode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node **head, int data)
{
}

void deleteNode(struct Node **head, int key)
{
    struct
}*/
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the beginning of the list
void insertAtBeginning(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}
// Function to insert a new node at the end of the list
void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete a node with a given data
void deleteNode(struct Node **head, int key)
{
    struct Node *temp = *head, *prev = NULL;
    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Node  with key %d not found\n", key);
        return;
    }
    prev->next = temp->next;
    free(temp);
}

// Function to search for a node with a given data
void searchNode(struct Node *head, int key)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            printf("Node with key %d found \n", key);
            return;
        }
        temp = temp->next;
    }
    printf("Node with key %d  not found \n", key);
}

// Function to print the linked list
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = NULL;
    int choice, data, key;

    while (1)
    {
        printf("1. Insert at the beginning\n2. insert at end \n 3. delete\n4.Serach\n 5. print \n 6. exit\n");
        printf("eneter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data to be insert at beginning : ");
            scanf("%d", &data);
            insertAtBeginning(&head, data);
            break;
        case 2:
            printf("Enter the data to be insert at end : ");
            scanf("%d", &data);
            insertAtEnd(&head, data);
            break;
        case 3:
            printf("Enter the data to be delete : ");
            scanf("%d", &key);
            deleteNode(&head, key);
            break;
        case 4:
            printf("Enter key to search  ");
            scanf("%d", &key);
            searchNode(head, key);
            break;
        case 5:
            printf("current list :  ");
            printList(head);
            break;
        case 6:
            exit(0);
        default:
            printf("invalid chpoice \n");
        }
    }
    return 0;
}