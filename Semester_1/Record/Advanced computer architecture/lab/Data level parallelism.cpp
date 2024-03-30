#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define ARRAY_SIZE 8
#define NUM_THREADS 2

typedef struct {
    int *array_a;
    int *array_b;
    int *result;
    int start;
    int end;
} ThreadData;

void *multiply_elements(void *arg) {
    ThreadData *thread_data = (ThreadData *)arg;
    for (int i = thread_data->start; i < thread_data->end; i++) {
        thread_data->result[i] = thread_data->array_a[i] * thread_data->array_b[i];
    }
    pthread_exit(NULL);
}

int main() {
    int array_a[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};
    int array_b[ARRAY_SIZE] = {8, 7, 6, 5, 4, 3, 2, 1};
    int result[ARRAY_SIZE];

    pthread_t threads[NUM_THREADS];
    ThreadData thread_data[NUM_THREADS];
    int chunk_size = ARRAY_SIZE / NUM_THREADS;

    for (int i = 0; i < NUM_THREADS; i++) {
        thread_data[i].array_a = array_a;
        thread_data[i].array_b = array_b;
        thread_data[i].result = result;
        thread_data[i].start = i * chunk_size;
        thread_data[i].end = (i == NUM_THREADS - 1) ? ARRAY_SIZE : (i + 1) * chunk_size;
        pthread_create(&threads[i], NULL, multiply_elements, (void *)&thread_data[i]);
    }

    // Wait for all threads to finish
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("Result Array after Data-Level Parallelism (element-wise multiplication):\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

