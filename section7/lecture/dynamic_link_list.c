#include <stdlib.h>
#include <stdio.h>
#define MAX_LENGTH 5

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void create_first_node() {
    head = (struct Node*) malloc(sizeof(struct Node));
    head -> next = NULL;
    printf("Enter first value:\n");
    scanf("%i", &head -> data);
}

void create_new_node() {
    struct Node *temp;
    temp = head;
    for(;;) {
        if((temp->next) == NULL) {
            break;
        } else {
            temp = temp->next;
        }
    }
    temp->next = (struct Node*) malloc(sizeof(struct Node));
    printf("Enter new value:\n");
    scanf("%i", &temp->next->data);
    temp->next->next = NULL;
}

void print_data() {
    struct Node *temp;
    temp = head;
    int counter = 1;
    printf("Here is your linked list:\n");
    for(;;) {
        if(temp->next != NULL) {
            printf("Value number %i = %i\n", counter,temp->data);
            temp = temp->next;
            counter++;
        } else {
            printf("Value number %i = %i\n", counter,temp->data);
            break;
        }
    }
}

int main() {

    create_first_node();

    for(int i=0; i < MAX_LENGTH - 1; i++) {
        create_new_node();
    }

    print_data();

    return 0;
}

