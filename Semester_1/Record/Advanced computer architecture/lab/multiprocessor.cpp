#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_PROCESSORS 4
#define TASKS_PER_PROCESSOR 5

// Data structure to represent a task
typedef struct {
    int id;
    int processor_id;
} Task;

// Function to simulate task execution
void* executeTask(void* arg) {
    Task* task = (Task*)arg;
    printf("Task %d executing on Processor %d\n", task->id, task->processor_id);
    // Additional task execution logic goes here
    free(task); // Free memory allocated for the task
    return NULL;
}

int main() {
    // Initialize pthread variables
    pthread_t processors[NUM_PROCESSORS][TASKS_PER_PROCESSOR];

    // Simulate tasks
    for (int i = 0; i < NUM_PROCESSORS; ++i) {
        for (int j = 0; j < TASKS_PER_PROCESSOR; ++j) {
            // Create a task
            Task* task = (Task*)malloc(sizeof(Task));
            task->id = j;
            task->processor_id = i;
            // Simulate task execution on a separate thread
            pthread_create(&processors[i][j], NULL, executeTask, (void*)task);
        }
    }

    // Wait for all threads to finish
    for (int i = 0; i < NUM_PROCESSORS; ++i) {
        for (int j = 0; j < TASKS_PER_PROCESSOR; ++j) {
            pthread_join(processors[i][j], NULL);
        }
    }

    return 0;
}

