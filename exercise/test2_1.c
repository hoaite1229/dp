#include <stdio.h>

unsigned int n;
unsigned int count = 0;

void traverse(i, j) {
    if(i < n - 1) {
        traverse(i + 1, j);
    }
    if(j < n - 1) {
        traverse(i, j + 1);
    }
    if(i == n - 1 && j == n - 1) {
        count++;
    }
}

int main() {
    printf("Input array size : ");
    scanf("%u", &n);
    traverse(0, 0);
    printf("The number of traverse : %u\n", count);
    return 0;
}