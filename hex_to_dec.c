/* Excercise 2-3: K&R :: Convert Hex input into base-10 integer outout
(c) Joshua Skootsky, 2014 */

#include <stdio.h>
#include <math.h>
#define MAXLINE 1000 

int main(int argc, char *argv[]) {
    
    char input[MAXLINE], copy[MAXLINE];
    int i, c, h, j, sum, val = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t') {
            ; //do nothing
        }
        else {
            input[i] = c;
            ++i;
        }
    }
    input[i] = '\0';
    
    printf("\nOriginal String:\n%s\n", input);
    
    if (input[0] == '0' && (input[1] == 'x' || input[1] == 'X')) {
        printf("Hexadecimal supplied.\n");
        h = 2;
    }
    else {
        printf("Assuming Hexadecimal\n");
        h = 0;
    }
    j = 0 ;
    i = 0 + h;
    while (input[i] != '\0') {
        copy[j] = input[i];
        ++j;
        ++i;
    }
    ++j;
    copy[j] = '\0';
    j--;
    printf("Here is a copy:\n%s\nIt is %i long\n", copy, j);
   
    // Convert from base_16 to base 10
    i = 0;
    while (copy[i] != '\0') {
        if (copy[i] >= 'A' && copy[i] <= 'F') {
            switch(copy[i]) {
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
                    printf("Your switch statement needs better guards!\n");
            }
        }
        else {
            val = copy[i] - '0';
        }
        sum = val * pow(16,j-1-i) + sum;        
        i++;
    }
    
    printf("This is the sum:\n%i\n", sum);
    return 0;
}


