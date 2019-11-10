#include <stdio.h>

int main() {
    unsigned long int n;
    printf("Enter an integer: ");
    scanf("%lu", &n);

    while(n) {
	int d = n%10;
        printf("%d", d);
        n /= 10;
    }

    printf("\n");

    return 0;
}
