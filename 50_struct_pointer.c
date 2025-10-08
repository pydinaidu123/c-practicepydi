#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s = {1, "Ravi", 89.5};
    struct Student *ptr = &s;
    printf("Roll: %d\nName: %s\nMarks: %.2f", ptr->roll, ptr->name, ptr->marks);
    return 0;
}