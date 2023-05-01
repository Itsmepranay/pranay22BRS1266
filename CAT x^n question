#include<stdio.h>

int power(int x, int n) {
    int k;
    if(n == 0) {
        return 1;
    } else if(n == 1) {
        return x;
    } else {
        k = power(x, n-1);
        return x*k;
    }
}

int main() {
    int x, n;
    scanf("%d", &x);
    scanf("%d", &n);
    printf("%d", power(x, n));
    return 0;
}
