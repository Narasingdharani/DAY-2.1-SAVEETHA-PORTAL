#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);

    if (temperature > 30.0) {
        printf("It's hot.\n");
    }
    else if (temperature >= 15.0 && temperature <= 30.0) {
        printf("It's warm.\n");
    }
    else {
        printf("It's cold.\n");
    }

    return 0;
}
