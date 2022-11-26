#include <stdio.h>
#define MAX_LEN 128

void print_image(FILE *fptr);

int main()
{
    char *filename = "asciiArt.c";
    FILE *fptr = NULL;

    if ((fptr = fopen(filename, "r")) == NULL)
    {
        fprintf(stderr, "error opening %s\n", filename);
        return 1;
    }

    print_image(fptr);
    fclose(fptr);
    printf("\nVytautas\n");
    printf("Mielkus\n");
    printf("PS\n");
    printf("5\n");

    return 0;
}

void print_image(FILE *fptr)
{
    char read_string[MAX_LEN];

    while (fgets(read_string, sizeof(read_string), fptr) != NULL)
        printf("%s", read_string);
}