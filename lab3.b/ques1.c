#include <stdio.h> 
int main() {
    int n, num;
    int positive = 0, negative = 0, zero = 0;
 
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
 
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
    }
    printf("\nTotal Positive Numbers: %d\n", positive);
    printf("Total Negative Numbers: %d\n", negative);
    printf("Total Zeros: %d\n", zero);
 
    return 0;
}
 
