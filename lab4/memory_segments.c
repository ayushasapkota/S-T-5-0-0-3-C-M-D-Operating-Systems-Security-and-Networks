
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int global_initialized = 10;
int global_uninitialized;

void show_memory() {
    int stack_variable = 20;

    int *heap_variable = malloc(sizeof(int));
    *heap_variable = 30;

    printf("Text address: %p\n", (void *)show_memory);
    printf("Data address: %p\n", (void *)&global_initialized);
    printf("BSS address: %p\n", (void *)&global_uninitialized);
    printf("Heap address: %p\n", (void *)heap_variable);
    printf("Stack address: %p\n", (void *)&stack_variable);

    free(heap_variable);
}

int main() {
    show_memory();
      sleep(60);
    return 0;
}


