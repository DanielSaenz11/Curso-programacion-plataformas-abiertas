#include "stack.h"
#include <stdio.h>

int main() {
    int estaVacio = 0;
    Stack* stack = initStack();

    estaVacio = isEmpty(stack);

    if (!estaVacio) {
        printf("Stack no vacio\n");
    }
    else if (estaVacio == 1) {
        printf("Stack vacio\n");
    }
    

    push(stack, 1);

    printStack(stack);

    push(stack, 2);
    
    printStack(stack);

    push(stack, 3);

    printStack(stack);

    push(stack, 4);

    printStack(stack);

    int poppedData = pop(stack);

    printf("Data extraido: %d\n", poppedData);

    printStack(stack);

    estaVacio = isEmpty(stack);

    if (!estaVacio) {
        printf("Stack no vacio\n");
    }
    else if (estaVacio == 1) {
        printf("Stack vacio\n");
    }

    freeStack(stack);

    return 0;
}