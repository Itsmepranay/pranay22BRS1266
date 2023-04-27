#include <stdio.h>

int sumOfSeries(int n) {
    if (n == 1) {
        return 1;
    } 
    else {
        int k = 1;
        for (int i = 1; i <= n; i++) {
            k *= i;
        }
        int q = k + sumOfSeries(n - 1);
        return q;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int result = sumOfSeries(n);
    printf("%d", result);
    return 0;
}