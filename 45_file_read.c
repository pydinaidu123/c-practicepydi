#include <stdio.h>
int main() {
    FILE *fp = fopen("output.txt", "r");
    char ch;
    if (!fp) {
        printf("File not found!");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}