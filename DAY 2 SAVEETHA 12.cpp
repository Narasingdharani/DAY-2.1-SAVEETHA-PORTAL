#include <stdio.h>

int main() {
    int num, even_sum = 0, odd_sum = 0;

    printf("Enter a series of numbers (0 to end): ");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num % 2 == 0) {
            even_sum += num;
        } else {
            odd_sum += num;
        }
    }

    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);

    return 0;
}
