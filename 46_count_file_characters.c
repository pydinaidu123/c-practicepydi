#include <stdio.h>
int main() {
    FILE *fp = fopen("output.txt", "r");
    int count = 0;
    char ch;
    if (!fp) {
        printf("File not found!");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) count++;
    fclose(fp);
    printf("Character count: %d", count);
    return 0;
}