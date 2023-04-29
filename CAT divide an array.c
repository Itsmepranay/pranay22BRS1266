#include <stdio.h>

void divide(int a[], int leftarr[], int rightarr[]);
int recursion(int arr[], int size);

int main() {
    int a[] = {1, 2, 3, 4, 5,6,7,8};
    int size = sizeof(a) / sizeof(a[0]);
    int leftarr[size/2];
    int rightarr[size/2 + size%2];

    divide(a, leftarr, rightarr);
    int count = recursion(leftarr, size/2);
    printf(" %d\n", count);

    return 0;
}

void divide(int a[], int leftarr[], int rightarr[]){
    int k = sizeof(a) / sizeof(a[0]) / 2;
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        if (i < k) {
            leftarr[i] = a[i];
        } else {
            rightarr[i - k] = a[i];
        }
    }
}

int recursion(int arr[], int size) {
    if (size == 1) {
        return 0;
    } else {
        int leftarr[size/2];
        int rightarr[size/2 + size%2];
        divide(arr, leftarr, rightarr);
        return 1 + recursion(leftarr, size/2);
    }
}
