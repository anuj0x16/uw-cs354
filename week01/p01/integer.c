#include <stdio.h>

#define TRUE 1
#define FALSE 0

int is_prime(const int n);

int main(void) {
    int n;

    printf("enter an integer between 1 to 100 (1 and 100 excluded):\n");
    scanf("%d", &n);

    if (n < 2 || n > 99) {
        printf("not in range\n");
        return -1;
    }

    printf("0x%x\n", n);
    printf("0%o\n", n);

    if (is_prime(n))
        printf("prime\n");
    else
        printf("composite\n");
    
    return 0;
}

int is_prime(const int n) {
    int prime = TRUE;
    for (int i = 2; i < n; i++)
        if (n % i == 0) {
            prime = FALSE;
            break;
        }
    return prime;
}
