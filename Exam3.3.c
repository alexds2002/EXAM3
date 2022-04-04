#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} NodeLL;

void push(NodeLL** head, int data){
    NodeLL* current = malloc(sizeof(NodeLL));
    
    current->next = *head;
    *head = current;
    current->data = data;
}
void setToFirst(NodeLL** head){

    NodeLL* current = malloc(sizeof(NodeLL));
    while (current != NULL)
    {
        current = current->next;
    }
    current = *head;
    
}
void Print(NodeLL* head){
    NodeLL* current = head;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        
        current = current->next;
    }
}
int main(){
    NodeLL* head = NULL;
    unsigned n;
    scanf("%u", &n);
    int input;
    while (scanf("%d", &input))
    {
        push(&head, input);
    }
    
    

    return EXIT_SUCCESS;
}