#include <stdio.h>
int main() {
    FILE *fp = fopen("output.txt", "w");
    if (!fp) {
        printf("File not created!");
        return 1;
    }
    fprintf(fp, "Hello, this is a test file.");
    fclose(fp);
    printf("Data written successfully.");
    return 0;
}