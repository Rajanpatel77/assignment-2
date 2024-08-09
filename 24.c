#include <stdio.h>

void main() {
    FILE *file;
    char filename[100];
    char buffer[256]; 

    printf("Enter the filename to read: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("\nError opening file");
        return;
    }

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
    }

    fclose(file);
}
