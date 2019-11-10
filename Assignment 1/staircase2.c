#include <stdio.h>

#define MAX_STAIRCASES 100
#define MIN_STAIRCASES 0

#define MAX_STAIRS 9
#define MIN_STAIRS 1

#define MAX_ROWS 100
#define MIN_ROWS 0

void print_staircases(int n, int num_stairs) {
    for (int i = 0; i < num_stairs; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < num_stairs; k++) {
                if (k >= num_stairs - i - 1) {
                    printf("%d", num_stairs);
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
  int num_staircases, num_stairs, num_rows;
    printf("Enter number of: staircases, stairs, rows: ");
    scanf("%d%d%d", &num_staircases, &num_stairs, &num_rows);
    int ok=1;
    if (num_staircases < MIN_STAIRCASES || num_staircases > MAX_STAIRCASES) {
	    printf("n=%d, must be in [0,100]\n", num_staircases);
	    ok = 0;
    }
    if (num_stairs < MIN_STAIRS || num_stairs > MAX_STAIRS) {
	    printf("m=%d, must be in [1,9]\n", num_stairs);
	    ok = 0;
    }
    if (num_rows < MIN_ROWS || num_rows > MAX_ROWS) {
        printf("p=%d, must be in [0,100]\n", num_rows);
        ok = 0;
    }

    if (!ok) return 1;
    
    while (num_staircases > 0) {
        if (num_staircases >= num_rows) {
	        print_staircases(num_rows, num_stairs);
	        num_staircases -= num_rows;
	        continue;
        } 
        print_staircases(num_staircases, num_stairs);
        break;
    }
    return 0;
}

