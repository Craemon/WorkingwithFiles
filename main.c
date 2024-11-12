#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fptr;
    char name[50];
    printf("Enter your Name:\n");
    scanf("%s", name);
    fptr = fopen("C:\\Users\\Foldman\\Documents\\namelist.txt", "a");
    fprintf(fptr, "%s\n", name);
    fclose(fptr);
    return 0;
}
