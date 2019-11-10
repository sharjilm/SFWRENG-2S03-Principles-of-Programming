#include <stdio.h>
#include <string.h>


int main() {
     char number[80];


    for (int i = 0; i < 21; i++) {
        number[i] = '0';
    }

    printf("Enter a decimal string: ");
    scanf("%20s", number);

    unsigned num_len = strlen(number);

    int start = 0;
    //Update the start index to the first non-zero digit (removes leading zeros)
    for (int j = 0; j < num_len; j++) {
    	if(number[start] <= '0')
            start = j;
        else
	    break;
    }

    //An input of only zeros will print an empty string
    if(start == num_len-1){
	printf("\n");
	return 0;
    }

    int finish = num_len-1;
    //Update the finish index to the last non-zero digit (removes trailing zeros)
    for (int k = finish; k >= 0; k--) {
        if(number[finish] <= '0' && finish != start)
            finish = k;
        else
            break;
    }

    //Print the digit characters within the start and finish indices, in reverse order
    while (finish >= start) {
        printf("%c", number[finish--]);
    }

    printf("\n");
    return 0;
}
