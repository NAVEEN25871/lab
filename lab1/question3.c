#include <stdio.h>

int main() {
    char name;
    int age;

    printf("Enter name (single word) and age: ");
    scanf("%99s %d", name, &age);

    printf("Name: %s, Age: %d\n", name, age);
    return 0;
}