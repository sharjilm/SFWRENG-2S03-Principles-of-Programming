#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned a, b;
    printf("Enter two positive integers: ");
    scanf("%u %u", &a, &b);
    printf("Common factors of (%u, %u): ", a, b);

    unsigned long sum = 0;
    unsigned gcf = 0;

    // Compute common factors
    for (unsigned long i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            printf("%lu ", i);
            sum += i;

            // Keep track of GCF
            if (i > gcf)
                gcf = i;
        }
    }

    printf("\nGCF: %u\n", gcf);

    // Compute LCM
    unsigned long lcm = (long)a * (long)b;
    lcm /= gcf;
    printf("LCM: %lu\n", lcm);

    sum += gcf;
    sum += lcm;
    printf("sum: %lu\n", sum);
}
