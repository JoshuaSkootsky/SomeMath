/* Excercise 2-3: K&R :: Convert Hex input into base-10 integer outout
(c) Joshua Skootsky, 2014 */

#include <stdio.h>
#include <math.h>
#define MAXLINE 1000 

int main(int argc, char *argv[]) {
    
    char input[MAXLINE];
    int i, c, h, j, sum, val = 0;

	/* Read from file to stored 'input' array, skipping newlines */
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t') {
            ; /* do nothing */
        }
        else {
            input[i] = c;
            ++i;
        }
    }
    input[i] = '\0';
	
    printf("Here is input:\n%s\nIt is %i long\n", input, i);
	
	/* Work around 0x intro to Hex using stateful 'h' variable */
    if (input[0] == '0' && (input[1] == 'x' || input[1] == 'X')) {
        printf("Hexadecimal supplied.\n");
        h = 2;
    }
    else {
        printf("Assuming Hexadecimal\n");
        h = 0;
    }
    /* Save stateful h variable to j */
    j = 0 + h;	


    /* Convert from base_16 to base 10 */
    while (input[j] != '\0') {
        // Handle Hex cases
		switch(input[j]) {
			case 'A':
				val = 10;
				break;
            case 'B':
				val = 11;
                break;
            case 'C':
                val = 12;
                break;
            case 'D':
                val = 13;
                break;
            case 'E':
                val = 14;
                break;
			case 'F':
                val = 15;
                break;
            default:
                val = input[j] - '0';
        }
        /* Sum based on position in array */
		sum = val * pow(16,i-1-j) + sum;        
        j++;
    }
    
    printf("This is the sum:\n%i\n", sum);
    return 0;
}
