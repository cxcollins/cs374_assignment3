#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    int response = 1;

    do {
        printf("1. Select file to process\n");
        printf("2. Exit the program\n");
        scanf("%d", &response);
        
        if (response == 1) {
            // TODO: Implement file selection
        } else if (response < 1 || response > 2) {
            printf("Invalid response. Please try again.\n");
        }
    } while (response != 2);

    return 0;
}