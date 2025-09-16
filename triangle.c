#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is valid.\n");

        if (a == b && b == c) {
            printf("The triangle is equilateral.\n");
        } else if (a == b || b == c || a == c) {
            printf("The triangle is isosceles.\n");
        } else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
            printf("The triangle is a right-angled triangle.\n");
        } else {
            printf("The triangle is scalene.\n");
        }
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}