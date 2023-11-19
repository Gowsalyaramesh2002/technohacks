#include <stdio.h>

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    double temperature;
    char choice;

    // Input from the user
    printf("Enter temperature: ");
    scanf("%lf", &temperature);

    // Choose conversion direction
    printf("Choose conversion:\n");
    printf("a. Celsius to Fahrenheit\n");
    printf("b. Fahrenheit to Celsius\n");
    printf("Enter choice (a/b): ");
    scanf(" %c", &choice);

    // Perform the conversion based on user's choice
    switch (choice) {
        case 'a':
            printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, celsiusToFahrenheit(temperature));
            break;
        case 'b':
            printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, fahrenheitToCelsius(temperature));
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
