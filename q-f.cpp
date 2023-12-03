#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void findPrimeSum(int n) {
    for (int a = 3; a <= n / 2; a += 2) {
        int b = n - a;
        if (isPrime(a) && isPrime(b)) {
            std::cout << n << " = " << a << " + " << b << '\n';
            return;
        }
    }
}

int main() {
    int n;
    while (true) {
        std::cin >> n;
        if (n == 0) {
            break;
        }
        findPrimeSum(n);
    }

    return 0;
}
