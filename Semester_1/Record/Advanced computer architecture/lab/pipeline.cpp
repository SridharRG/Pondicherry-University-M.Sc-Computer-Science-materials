#include <stdio.h>

#define ARRAY_SIZE 8

// Stage 1: Load data
void load_data(int* input, int* buffer) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        buffer[i] = input[i];
    }
}

// Stage 2: Process data
void process_data(int* buffer) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        buffer[i] += 10; // Simulating some processing
    }
}

// Stage 3: Store data
void store_data(int* buffer, int* output) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        output[i] = buffer[i];
    }
}

int main() {
    int input_array[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};
    int buffer[ARRAY_SIZE];
    int output_array[ARRAY_SIZE];

    // Pipeline Stage 1: Load data
    load_data(input_array, buffer);

    // Pipeline Stage 2: Process data
    process_data(buffer);

    // Pipeline Stage 3: Store data
    store_data(buffer, output_array);

    // Display results
    printf("Input Array:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", input_array[i]);
    }
    printf("\n");

    printf("Output Array after Pipeline:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", output_array[i]);
    }
    printf("\n");

    return 0;
}

