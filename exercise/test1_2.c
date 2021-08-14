#include <stdio.h>
#include <stdlib.h>

int *arraySum(int *arr, unsigned int c) {
    if(c == 1) {
        return arr;
    } else {
        arraySum(arr, c-1);
        arr[c-1] += arr[c-2];
        return arr;
    }
}

int main() {
    unsigned int n, i;
    int *arr; 
    printf("Array size : ");
    scanf("%u", &n);
    arr = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++) {
        scanf("%d", arr+i);
    }
    arraySum(arr, n);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}