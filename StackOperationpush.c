
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

int isFull(struct stack *ptr) {
    if(ptr->top == ptr->size - 1) {
        return 1;
    } else {
        return 0;
    }
}

void push(struct stack *ptr, int val) {
    if(isFull(ptr)) {
        printf("The stack is full. Cannot push elements into it. Overflow condition occurred.\n");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
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

    int initialElements[] = {11, 22, 33}; // Initial elements in the stack
    int newElements[] = {56, 54, 36, 99, 35}; // Elements to be inserted

    printf("Before pushing initial elements, full: %d\n", isEmpty(sp));
    displayStack(sp); // Display stack before inserting new elements

    for(int i = 0; i < sizeof(initialElements) / sizeof(initialElements[0]); i++) {
        push(sp, initialElements[i]); // Push initial elements onto the stack
    }

    printf("After pushing initial elements, full: %d\n", isFull(sp));
    displayStack(sp); // Display stack after inserting initial elements

    printf("Before pushing new elements, full: %d\n", isFull(sp));

    for(int i = 0; i < sizeof(newElements) / sizeof(newElements[0]); i++) {
        push(sp, newElements[i]); // Push new elements onto the stack
    }

    printf("After pushing new elements, full: %d\n", isFull(sp));
    displayStack(sp); // Display stack after inserting new elements

    //free(sp->arr);
    //free(sp);
    return 0;
}
