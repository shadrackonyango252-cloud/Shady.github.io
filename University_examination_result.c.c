#include <stdio.h>
#include <stdlib.h>


struct Student {
    char name[50];
    char regNo[20];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error: Could not open file 'results.dat'.\n");
        return 1;
    }

    printf("Student Examination Results:\n");
    printf("-----------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("Name: %s\n", s.name);
        printf("Registration No: %s\n", s.regNo);
        printf("Total Marks: %.2f\n\n", s.marks);
    }

    fclose(fp);
    return 0;
}
