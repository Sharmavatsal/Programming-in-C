#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

int Isempty() {
    if (top == NULL) {
        printf("Stack underflow!\n");
        return 1;
    } else {
        return 0;
    }
}

void Isfull() {
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    if (tmp == NULL) {
        printf("Stack overflow!\n");
    } else {
        free(tmp);
    }
}

void push() {
    int value;
    printf("Enter a value: ");
    scanf("%d", &value);
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    if (tmp == NULL) {
        printf("Stack overflow!\n");
    } else {
        tmp->data = value;
        tmp->next = top;
        top = tmp;
    }
}

int pop() {
    int removed = -1;
    if (top == NULL) {
        printf("Stack underflow!\n");
        return removed;
    } else {
        struct node *tmp = top;
        removed = tmp->data;
        top = top->next;
        free(tmp);
        return removed;
    }
}

int peek(int pos) {
    int t = -1;
    struct node *p = top;
    if (top == NULL) {
        printf("Stack underflow!\n");
        return t;
    }
    for (int i = 0; i < pos - 1; i++) {
        if (p == NULL) {
            break;
        }
        p = p->next;
    }
    if (p == NULL) {
        return t;
    } else {
        t = p->data;
        return t;
    }
}

void display() {
    if (top == NULL) {
        printf("Stack underflow!\n");
    } else {
        struct node *p = top;
        while (p != NULL) {
            printf("Address: %p, Value: %d, Address of next node: %p\n", p, p->data, p->next);
            p = p->next;
        }
    }
}

int main() {
    int choice = -1;
    while (choice != 0) {
        printf("Press 1 to push an element into the stack\n");
        printf("Press 2 to pop an element from the stack\n");
        printf("Press 3 to peek into the stack\n");
        printf("Press 4 to display the stack\n");
        printf("Press 5 to exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                printf("Popped value: %d\n", pop());
                break;
            case 3: {
                int pos;
                printf("Enter position to peek: ");
                scanf("%d", &pos);
                int peeked_value = peek(pos);
                if (peeked_value != -1)
                    printf("Value at position %d: %d\n", pos, peeked_value);
                break;
            }
            case 4:
                display();
                break;
            case 5:
                printf("Thank you!\n");
                break;

        }
    }
    return 0;
}
