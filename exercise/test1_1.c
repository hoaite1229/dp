#include <stdio.h>

// Recursive
/*
unsigned int fact(unsigned int n) {
    if(n > 1) {
        return n * fact(n-1);
    } else {
        return 1;
    }
}
*/
// Not recursive
unsigned int fact(unsigned int n) {
    int i, j = 1;
    for(i = 1; i <= n; i++) {
        j *= i;
    }
    return j;
}

int main() {
    unsigned int x;
    printf("Factorial : ");
    scanf("%u", &x);
    printf("%u! = %u\n", x, fact(x));
    return 0;
}