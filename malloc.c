#include <stdio.h>
#include <stdlib.h>
int main() {
    
    // Using malloc()
    int *arr_malloc = (int *)malloc(5 * sizeof(int));
    if (arr_malloc == NULL) {
        fprintf(stderr, "Memory allocation failed for arr_malloc\n");
        return 1;
    }
    // Using calloc()
    int *arr_calloc = (int *)calloc(5, sizeof(int));
    if (arr_calloc == NULL) {
        fprintf(stderr, "Memory allocation failed for arr_calloc\n");
        free(arr_malloc);  // Free the previously allocated memory
        return 1;
    }
    // Using realloc()
    int *arr_realloc = (int *)realloc(arr_malloc, 10 * sizeof(int));
    if (arr_realloc == NULL) {
        fprintf(stderr, "Memory reallocation failed for arr_realloc\n");
        free(arr_malloc);  // Free the previously allocated memory
        free(arr_calloc);  // Free the previously allocated memory
        return 1;
    }
    // Accessing and modifying elements
    for (int i = 0; i < 10; i++) {
        arr_realloc[i] = i * 2;
    }
    // Printing elements
    printf("arr_malloc: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr_malloc[i]);
    }
    printf("\n");
    printf("arr_calloc: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr_calloc[i]);
    }
    printf("\n");
    printf("arr_realloc: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr_realloc[i]);
    }
    printf("\n");
    // Freeing allocated memory
    free(arr_malloc);
    free(arr_calloc);
    free(arr_realloc);
    return 0;
}
