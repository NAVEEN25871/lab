#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;
    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    
    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}
