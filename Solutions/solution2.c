#include <stdio.h>

int lonelyinteger(int a[], int n) {
    int result = 0;
     // Iterate through each element in the array
    for (int i = 0; i < n; i++) {
// If an element occurs twice, XORing it with itself will result in 0 (due to the property of XOR: x ^ x = 0).
// If an element occurs only once, XORing it with the previous XORed elements will retain its value.
        result ^= a[i];
    }
    return result;
}

int main() {
    int a[] = {1, 2, 3, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int uniqueElement = lonelyinteger(a, n);
    printf("the unick element is - %d \n", uniqueElement);
    return 0;
}
