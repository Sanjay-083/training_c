#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int itmid = 1;
struct Product
{
    int productId;
    int quantity;
    char name[30];
    struct Product *next;
};
void createProduct(struct Product **head, struct Product **prevNode)
{
    int node;
    printf("Enter the Number of Nodes: ");
    scanf("%d", &node);
    struct Product *createPro = NULL;
    for (int i = 0; i < node; i++)
    {
        createPro = (struct Product *)malloc(sizeof(struct Product));
        int id, qty;
        printf("Enter the Product Name:");
        scanf("%s", createPro->name);
        printf("Enter the Product Quantity:");
        scanf("%d", &qty);
        createPro->quantity = qty;
        createPro->productId = itmid++;
        if (*head == NULL)
        {
            *head = createPro;
        }
        else
        {
            (*prevNode)->next = createPro;
        }
        *prevNode = createPro;
    }
}
void displayProduct(struct Product **head)
{
    struct Product *temp = *head;
    while (temp != NULL)
    {
        printf("Product ID: %d\n", temp->productId);
        printf("Product Name: %s\n", temp->name);
        printf("Product Quantity: %d\n", temp->quantity);
        temp = temp->next;
    }
}
void addtocart(struct Product **head)
{
    int id;
    printf("Enter Product ID to add to cart: ");
    scanf("%d", &id);
    struct Product *temp = *head;
}
void displaycart(struct Product )
{
    struct Product *temp = ;
    while (temp != NULL)
    {
        printf("Product ID: %d\n", temp->productId);
        printf("Product Name: %s\n", temp->name);
        printf("Product Quantity: %d\n", temp->quantity);
        temp = temp->next;
    }
}
int main()
{
    struct Product *head = NULL, *prevNode = NULL;
    while (1)
    {
        int n;
        printf("  1)Create New Product\n  2)Display All Product\n");
        printf("Enter the Choice");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            createProduct(&head, &prevNode);
            break;
        }
        case 2:
        {
            displayProduct(&head);
            break;
        }
        case 3:
        {
            addtocart(&head);
            break;
        }
        case 4:
        {
            displaycart(&head);
            break;
        }
        }
    }
    return 0;
}
