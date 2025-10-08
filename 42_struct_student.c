#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s;
    printf("Enter roll, name, marks: ");
    scanf("%d %s %f", &s.roll, s.name, &s.marks);
    printf("Student Details:\nRoll: %d\nName: %s\nMarks: %.2f", s.roll, s.name, s.marks);
    return 0;
}