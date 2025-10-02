/*
Name: Ouma Shadrack Onyango
Reg No: PA106/G/28794/25
*/
#include<stdio.h>

int main() {
    float attendance, average;


    printf("Enter your attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter your average marks: ");
    scanf("%f", &average);


    if (attendance >= 75 && average >= 40) {
        printf("You are eligible for the final exams.\n");
    } else {
        printf("Not eligible for the final exams.\n");
    }

    return 0;
}
