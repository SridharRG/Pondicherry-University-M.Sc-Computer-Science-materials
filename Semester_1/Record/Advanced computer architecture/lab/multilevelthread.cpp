#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define ARRAY_SIZE 1000000
#define NUM_THREADS 4

typedef struct {
    int* array;
    int start;
    int end;
    long long sum;
} ThreadData;

void* computeSum(void* arg) {
    ThreadData* threadData = (ThreadData*)arg;
    long long localSum = 0;
    for (int i = threadData->start; i < threadData->end; i++) {
        localSum += threadData->array[i];
    }
    threadData->sum = localSum;
    pthread_exit(NULL);
}

int main() {
    int* array = (int*)malloc(ARRAY_SIZE * sizeof(int));
    // Initialize array with some data
    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = i + 1;
    }

    pthread_t threads[NUM_THREADS];
    ThreadData threadData[NUM_THREADS];
    int chunkSize = ARRAY_SIZE / NUM_THREADS;
    for (int i = 0; i < NUM_THREADS; i++) {
        threadData[i].array = array;
        threadData[i].start = i * chunkSize;
        threadData[i].end = (i == NUM_THREADS - 1) ? ARRAY_SIZE : (i + 1) * chunkSize;
        pthread_create(&threads[i], NULL, computeSum, (void*)&threadData[i]);
    }

    long long totalSum = 0;
    // Wait for all threads to finish and accumulate results
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
        totalSum += threadData[i].sum;
    }

    // Display the result
    printf("Sum of array elements: %lld\n", totalSum);

    // Free allocated memory
    free(array);

    return 0;
}

