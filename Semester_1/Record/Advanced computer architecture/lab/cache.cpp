#include <stdio.h>
#include <stdlib.h>

#define CACHE_SIZE 4

typedef struct {
    int valid;
    int tag;
    int data;
} CacheLine;

// Function prototypes
void initializeCache(CacheLine* cache, int cacheSize);
int readFromMemory(int address);
int readFromCache(CacheLine* cache, int address);

void initializeCache(CacheLine* cache, int cacheSize) {
    for (int i = 0; i < cacheSize; i++) {
        cache[i].valid = 0;
        cache[i].tag = -1;
        cache[i].data = 0;
    }
}

int readFromMemory(int address) {
    // Simulating reading data from memory
    return address * 2; // Just a simple example, you can replace this with real data retrieval logic
}

int readFromCache(CacheLine* cache, int address) {
    if (address >= CACHE_SIZE) {
        printf("Address out of cache bounds!\n");
        return -1;
    }

    int index = address % CACHE_SIZE;
    int tag = address / CACHE_SIZE;

    if (cache[index].valid && cache[index].tag == tag) {
        // Cache hit
        printf("Cache Hit!\n");
        return cache[index].data;
    } else {
        // Cache miss
        printf("Cache Miss!\n");
        // Simulating reading data from memory
        int data = readFromMemory(address);
        // Update the cache
        cache[index].valid = 1;
        cache[index].tag = tag;
        cache[index].data = data;
        return data;
    }
}

int main() {
    CacheLine cache[CACHE_SIZE];
    initializeCache(cache, CACHE_SIZE);

    int readAddress = 7;
    // Read from cache
    int readData = readFromCache(cache, readAddress);
    printf("Data read from address %d: %d\n", readAddress, readData);

    // Read the same address again (cache hit)
    readData = readFromCache(cache, readAddress);
    printf("Data read from address %d (after cache hit): %d\n", readAddress, readData);

    int newAddress = 10;
    // Read from a different address (cache miss)
    int newData = readFromCache(cache, newAddress);
    printf("Data read from address %d (after cache miss): %d\n", newAddress, newData);

    return 0;
}

