#include <stdio.h>
/*
void printTable(int n) {
    for(int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, (n*i));
    }
}
*/
void printTable(unsigned int n, unsigned int i) {
    if(i > 0) {
        printTable(n, i-1);
        printf("%u * %u = %u\n", n, i, (n*i));
    }
}

int main() {
    unsigned int n;
    printf("Print multiplication table of : ");
    scanf("%u", &n);
    printTable(n, 9);
    return 0;
}