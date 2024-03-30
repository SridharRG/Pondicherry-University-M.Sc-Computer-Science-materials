#include <stdio.h>
#include <stdlib.h>

#define VECTOR_SIZE 8

typedef struct {
    float* data;
    int size;
} Vector;

Vector vector_add(const Vector *a, const Vector *b) {
    Vector result;
    result.size = a->size; // Using pointers to avoid unnecessary copying
    result.data = (float*)malloc(result.size * sizeof(float));
    if (result.data == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < a->size; i++) {
        result.data[i] = a->data[i] + b->data[i];
    }
    return result;
}

void print_vector(const Vector *v) {
    printf("Vector: ");
    for (int i = 0; i < v->size; i++) {
        printf("%f ", v->data[i]);
    }
    printf("\n");
}

int main() {
    Vector vector_a, vector_b, vector_result;
    vector_a.size = VECTOR_SIZE;
    vector_b.size = VECTOR_SIZE;
    vector_a.data = (float*)malloc(VECTOR_SIZE * sizeof(float));
    vector_b.data = (float*)malloc(VECTOR_SIZE * sizeof(float));

    if (vector_a.data == NULL || vector_b.data == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return EXIT_FAILURE;
    }

    // Initialize vectors with some data
    for (int i = 0; i < VECTOR_SIZE; i++) {
        vector_a.data[i] = i + 1.0;
        vector_b.data[i] = VECTOR_SIZE - i;
    }

    printf("Vector A:\n");
    print_vector(&vector_a);
    printf("Vector B:\n");
    print_vector(&vector_b);

    vector_result = vector_add(&vector_a, &vector_b);
    printf("Vector Sum:\n");
    print_vector(&vector_result);

    // Free allocated memory
    free(vector_a.data);
    free(vector_b.data);
    free(vector_result.data);

    return 0;
}

