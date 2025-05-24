#include <stdio.h>
#include <string.h>

void runLengthEncode(char *input) {
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        int count = 1;

        while (i < len - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }

        printf("%c%d", input[i], count);
    }
    printf("\n");
}

int main() {
    char input[100];

    printf("Enter a string to compress using RLE: ");
    scanf("%s", input); 

    printf("Compressed string: ");
    runLengthEncode(input);  

    return 0;
}
