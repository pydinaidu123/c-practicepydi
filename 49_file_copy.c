#include <stdio.h>
int main() {
    FILE *src = fopen("output.txt", "r");
    FILE *dest = fopen("copy.txt", "w");
    char ch;
    if (!src || !dest) {
        printf("File error!");
        return 1;
    }
    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);
    fclose(src);
    fclose(dest);
    printf("File copied successfully.");
    return 0;
}