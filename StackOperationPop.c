#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr) {
    if(ptr->top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int pop(struct stack *ptr) {
    if(isEmpty(ptr)) {
        printf("The stack is empty. Cannot pop elements from it. Underflow condition occurred.\n");
        return -1; // Signaling empty stack
    } else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

void displayStack(struct stack *ptr) {
    if(isEmpty(ptr)) {
        printf("The stack is empty. No elements to print.\n");
    } else {
        printf("Stack elements: ");
        for(int i = 0; i <= ptr->top; i++) {
            printf("%d ", ptr->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    int elements[] = {11, 22, 33, 56, 54, 36, 99, 35}; // Elements directly initialized in the stack

    printf("Before popping elements, full: %d\n", isEmpty(sp));
    displayStack(sp); // Display stack before popping elements

    // Copy elements directly into the stack array
    for(int i = 0; i < sizeof(elements) / sizeof(elements[0]); i++) {
        sp->top++;
        sp->arr[sp->top] = elements[i];
    }

    printf("After pushing elements, full: %d\n", isEmpty(sp));
    displayStack(sp); // Display stack after pushing elements

    printf("Popping elements from the stack:\n");
    while (!isEmpty(sp)) {
        printf("Popped: %d\n", pop(sp)); // Pop elements from the stack
    }

    printf("After popping elements, full: %d\n", isEmpty(sp));
    displayStack(sp); // Display stack after popping elements
    
    return 0;
}
