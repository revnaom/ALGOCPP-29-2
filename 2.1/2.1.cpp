#include <iostream>

int fibonacci(int n) 
{
    if (n <= 1) 
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    int n;
    std::cout << "Введите число n: ";
    std::cin >> n;
    std::cout << "Число Фибоначчи F(" << n << ") = " << fibonacci(n) << std::endl;
    return 0;
}