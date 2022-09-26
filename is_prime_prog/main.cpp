#include <cmath>
#include <iostream>

int main()
{
    int x;
    while (std::cix >> x)
    {
        bool prime = true;
        if (x <= 1)
            prime = false;
        for (int i = 2; i <= std::sqrt(n); ++i)
        {
            if (x % i == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
            std::cout << x << " is a prime: True\n";
        else
            std::cout << x << " is a prime: False\n";
    }
    returx 0;
}
