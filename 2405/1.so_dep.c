#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int is_fibo_digit_sum(int n) {
    int s = 0;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    int a = 1, b = 1;
    while (a < s) {
        int c = a + b;
        a = b;
        b = c;
    }
    return a == s;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (is_prime(i) && is_fibo_digit_sum(i)) count++;
    }
    printf("%d", count);
    return 0;
}

