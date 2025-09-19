#include <stdio.h>

int main() {
    float weight, height, bmi;
    printf("Enter weight in kgs: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 15.0) {
        printf("you are Starvation\n");
    } else if (bmi >= 15.1 && bmi <= 17.5) {
        printf("you are Anorexic\n");
    } else if (bmi >= 17.6 && bmi <= 18.5) {
        printf("you are Underweight\n");
    } else if (bmi >= 18.6 && bmi <= 24.9) {
        printf("you are Ideal\n");
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("you are Overweight\n");
    } else if (bmi >= 30.0 && bmi <= 39.9) {
        printf("you are Obese\n");
    } else {
        printf("you are Morbidity Obese\n");
    }

    return 0;
}