#include <iostream>

int fibonacci(int n, int* memo) 
{
    if (n <= 1) 
    {
        return n;
    }
    if (memo[n] != -1) 
    {
        return memo[n];
    }
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    return memo[n];
}

int main() 
{
    int n;
    std::cout << "Введите число n: ";
    std::cin >> n;

    int* memo = new int[n + 1];
    for (int i = 0; i <= n; ++i) 
    {
        memo[i] = -1;
    }

    std::cout << "Число Фибоначчи F(" << n << ") = " << fibonacci(n, memo) << std::endl;

    delete[] memo;

    return 0;
}