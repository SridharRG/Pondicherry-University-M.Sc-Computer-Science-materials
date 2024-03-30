#include<stdio.h>

int main() {
    int a[10], b[10], i;

    printf("\nEnter array elements for 'a':\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nEnter array elements for 'b':\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

    a[0] = a[0] + b[0];
    for(i = 0; i < 5; i++) {
        a[i + 1] = a[i] + b[i];
        b[i + 1] = a[i + 1] + b[i + 1];
    }

    printf("\nMatrix 'a':\n");
    for(i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

    printf("\nMatrix 'b':\n");
    for(i = 0; i < 5; i++) {
        printf("%d\n", b[i]);
    }

    return 0;
}

