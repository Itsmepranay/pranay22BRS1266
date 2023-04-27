#include <stdio.h>
#include <math.h>

int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d is prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
    
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }
    
    if (isPerfect(num)) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }
    
    return 0;
}

int isPrime(int num) {
    int i;
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isArmstrong(int num) {
    int sum = 0, temp = num, rem;
    int digits = floor(log10(num)) + 1;
    
    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    
    return (sum == num);
}

int isPer(int num) {
    int i, sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}
