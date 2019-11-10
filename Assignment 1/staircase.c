#include <stdio.h>

#define NUM_ROW 5
#define NUM_STAIRCASE 3

#define MAX_STAIRCASE 100
#define MIN_STAIRCASE 0

void print_staircases(int n) {
    for (int i = 0; i < NUM_STAIRCASE; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < NUM_STAIRCASE; k++) {
                if (k >= NUM_STAIRCASE - i - 1) {
                    printf("#");
                    continue;
                }
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int staircases;
    printf("Enter number of staircases: ");
    scanf("%d", &staircases);
    if (staircases < MIN_STAIRCASE || staircases > MAX_STAIRCASE) {
	    printf("n=%d, must be in [0,100]\n", staircases);
	    return 1;
    }

    while (staircases > 0) {
        if (staircases >= NUM_ROW) {
            print_staircases(NUM_ROW);
            staircases -= NUM_ROW;
            continue;
        } 
        print_staircases(staircases);
        break;
    }
    return 0;
}
