#include <stdio.h>

void main() {
    FILE *ifile, *ofile;
    char inputFilename[100], outputFilename[100];
    char ch;

    printf("Enter the input filename: ");
    scanf("%s", inputFilename);

    printf("Enter the output filename: ");
    scanf("%s", outputFilename);

    ifile = fopen(inputFilename, "r");
    if (ifile == NULL) {
        printf("\nError opening input file");
        return;
    }

    ofile = fopen(outputFilename, "w");
    if (ofile == NULL) {
        printf("\nError opening output file");
        fclose(ifile);
        return;
    }

    while ((ch = fgetc(ifile)) != EOF) {
        fputc(ch, ofile);
    }

    fclose(ifile);
    fclose(ofile);
}
