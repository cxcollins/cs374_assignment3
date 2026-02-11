#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int option_1_logic() {

    return 0;
}

int option_2_logic() {

    return 0;
}

int option_3_logic() {

    return 0;
}

int main(int argc, char **argv) {
    int response_1 = 1;
    int response_2 = 0;

    do {
        printf("1. Select file to process\n");
        printf("2. Exit the program\n");
        printf("Enter a choice 1 or 2: ");
        scanf("%d", &response_1);
        
        if (response_1 == 1) {
            do {
                printf("Which file you want to process?\n");
                printf("Enter 1 to pick the largest file\n");
                printf("Enter 2 to pick the smallest file\n");
                printf("Enter 3 to specify the name of a file\n");
                printf("Enter a choice from 1 to 3: ");
                scanf("%d", &response_2);

                if (response_2 == 1) {
                    option_1_logic();
                } else if (response_2 == 2) {
                    option_2_logic();
                } else if (response_2 == 3) {
                    option_3_logic();
                }
                else {printf("Invalid response. Please try again.\n");}
            } while (response_2 < 1 || response_2 > 3);

        } else if (response_1 < 1 || response_1 > 2) {
            printf("Invalid response. Please try again.\n");
        }
        
        response_2 = 0;  // Reset response_2 to restart iteration.
    } while (response_1 != 2);

    return 0;
}