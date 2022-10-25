#include <iostream>

bool is_prime(long long n) {
    
    if (n == 2 || n == 3)
        return true;
    
    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (long long i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int main()
{
    long long x;
    while (std::cin >> x) {
        std::cout << x << " is a prime: " << (is_prime(x) ? "True" : "False") << std::endl;
    }
    return 0;
}
