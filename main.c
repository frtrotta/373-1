#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int inSituInsertionSort(int v[], int n);

#define N 5
#define MAX_VALUE 10

int main(int argc, char** argv) {
    int v[N];
    int i;
    
    srand((unsigned)time(NULL));

    printf("Unordered values\n");
    for (i = 0; i < N; i++) {
        v[i] = (rand() % MAX_VALUE)+1;
        printf("%d: %d\n", i, v[i]);
    }
    
    inSituInsertionSort(v, N);
    
    printf("\n\nOrdered values\n");
    for (i = 0; i < N; i++) {
        printf("%d: %d\n", i, v[i]);
    }
    
    return (EXIT_SUCCESS);
}

int inSituInsertionSort(int v[], int n) {
    int r = 0;
    int toBeInserted;
    int i, j;
    if(n > 0) {
        // TODO Implement here
    }
    else
        r = -1;
    return r;
}
